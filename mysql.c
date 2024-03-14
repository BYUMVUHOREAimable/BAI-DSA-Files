#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>
// Structure to represent a student
struct Student {
    char name[100];
    int age;
    int marks;
    char school[100];
};
// Function to create the database and table
void createDatabaseAndTable(MYSQL* conn, const char* database, const char* table) {
    char query[200];
    sprintf(query, "CREATE DATABASE %s", database);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "Error creating database: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }
    sprintf(query, "USE %s", database);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "Error selecting database: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }
    sprintf(query, "CREATE TABLE IF NOT EXISTS %s (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100), age INT, marks INT, school VARCHAR(100))", table);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "Error creating table: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }
    printf("Database and table created successfully!\n");
}
// Function to insert a student into the table
void insertStudent(MYSQL* conn, const char* table, const struct Student* student) {
    char query[200];
    sprintf(query, "INSERT INTO %s (name, age, marks, school) VALUES ('%s', %d, %d, '%s')",
            table, student->name, student->age, student->marks, student->school);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "Error inserting student: %s\n", mysql_error(conn));
    } else {
        printf("Student inserted successfully!\n");
    }
}
// Function to display the table of students
void displayTable(MYSQL* conn, const char* table) {
    char query[100];
    sprintf(query, "SELECT * FROM %s", table);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "Error retrieving data: %s\n", mysql_error(conn));
        return;
    }
    MYSQL_RES* result = mysql_store_result(conn);
    if (result == NULL) {
        fprintf(stderr, "Error storing result: %s\n", mysql_error(conn));
        return;
    }
    printf("Student Table:\n");
    printf("-------------------------------------------------------------\n");
    printf("| %-4s | %-15s | %-4s | %-4s | %-15s |\n", "ID", "Name", "Age", "Marks", "School");
    printf("-------------------------------------------------------------\n");
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        printf("| %-4s | %-15s | %-4s | %-4s | %-15s |\n", row[0], row[1], row[2], row[3], row[4]);
    }
    printf("-------------------------------------------------------------\n");
    mysql_free_result(result);
}
// Function to delete a student from the table
void deleteStudent(MYSQL* conn, const char* table, int id) {
    char query[100];
    sprintf(query, "DELETE FROM %s WHERE id = %d", table, id);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "Error deleting student: %s\n", mysql_error(conn));
    } else {
        printf("Student with ID %d deleted successfully!\n", id);
    }
}
// Function to update a student's information
void updateStudent(MYSQL* conn, const char* table, int id, int age, int marks, const char* school) {
    char query[200];
    sprintf(query, "UPDATE %s SET age = %d, marks = %d, school = '%s' WHERE id = %d",
            table, age, marks, school, id);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "Error updating student: %s\n", mysql_error(conn));
    } else {
        printf("Student with ID %d updated successfully!\n", id);
    }
}
int main() {
    char databases[100];
     char tables[100];
    printf("enter the name of the database");
scanf("%s", &databases);
printf("enter the name of table");
scanf("%s", &tables);
    MYSQL* conn = mysql_init(NULL);
    if (conn == NULL) {
        fprintf(stderr, "Error initializing MySQL: %s\n", mysql_error(conn));
        exit(1);
    }
    const char* server = "localhost";
    const char* user = "your_username";
    const char* password = "";
    const char* database =databases;
    const char* table = tables;
    unsigned int port = 3306;
    if (!mysql_real_connect(conn, server, user, password, NULL, port, NULL, 0)) {
        fprintf(stderr, "Error connecting to MySQL server: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }
    createDatabaseAndTable(conn, database, table);
    int choice;
    int id;
    struct Student student;
    do {
        printf("\n1. Add Student\n");
        printf("2. Display Table\n");
        printf("3. Delete Student\n");
        printf("4. Update Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter student name: ");
                scanf("%s", student.name);
                printf("Enter student age: ");
                scanf("%d", &(student.age));
                printf("Enter student marks: ");
                scanf("%d", &(student.marks));
                printf("Enter student school: ");
                scanf("%s", student.school);
                insertStudent(conn, table, &student);
                break;
            case 2:
                displayTable(conn, table);
                break;
            case 3:
                printf("Enter student ID to delete: ");
                scanf("%d", &id);
                deleteStudent(conn, table, id);
                break;
            case 4:
                printf("Enter student ID to update: ");
                scanf("%d", &id);
                printf("Enter new age for student: ");
                scanf("%d", &(student.age));
                printf("Enter new marks for student: ");
                scanf("%d", &(student.marks));
                printf("Enter new school for student: ");
                scanf("%s", student.school);
                updateStudent(conn, table, id, student.age, student.marks, student.school);
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);
    mysql_close(conn);
    return 0;
}