#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define FILE_NAME "student_records.txt"

// Structure to represent a student record
struct Student {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    float marks;
};

// Function to insert a new student record
void insertRecord() {
    struct Student student;
    FILE *file;

    // Open the file in append mode
    file = fopen(FILE_NAME, "ab");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Roll Number: ");
    if (scanf("%d", &student.rollNumber) != 1) {
        printf("Invalid input for Roll Number!\n");
        fclose(file);
        return;
    }

    printf("Enter Name: ");
    if (scanf(" %[^\n]s", student.name) != 1) {
        printf("Invalid input for Name!\n");
        fclose(file);
        return;
    }

    printf("Enter Marks: ");
    if (scanf("%f", &student.marks) != 1) {
        printf("Invalid input for Marks!\n");
        fclose(file);
        return;
    }

    // Write the student record to the file
    fwrite(&student, sizeof(struct Student), 1, file);

    printf("Record inserted successfully!\n");

    // Close the file
    fclose(file);
}

// Function to display all student records
void displayRecords() {
    struct Student student;
    FILE *file;

    // Open the file in read mode
    file = fopen(FILE_NAME, "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    printf("Roll Number\tName\t\tMarks\n");

    // Read and display each student record in the file
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("%d\t\t%s\t\t%.2f\n", student.rollNumber, student.name, student.marks);
    }

    printf("-----------------------\n");

    // Close the file
    fclose(file);
}

// Function to validate roll number
int validateRollNumber(int rollNumber) {
    if (rollNumber <= 0) {
        printf("Invalid Roll Number! Roll Number must be a positive integer.\n");
        return 0;
    }

    struct Student student;
    FILE *file;

    // Open the file in read mode
    file = fopen(FILE_NAME, "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    // Check if the roll number already exists
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.rollNumber == rollNumber) {
            printf("Roll Number already exists! Please choose a different Roll Number.\n");

            // Close the file
            fclose(file);
            return 0;
        }
    }

    // Close the file
    fclose(file);

    return 1;
}

// Function to update a student record by roll number
void updateRecord() {
    int rollNumber;
    struct Student student;
    FILE *file;

    // Open the file in read+write mode
    file = fopen(FILE_NAME, "rb+");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Roll Number to update: ");
    if (scanf("%d", &rollNumber) != 1) {
        printf("Invalid input for Roll Number!\n");
        fclose(file);
        return;
    }

    // Search for the student record in the file
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.rollNumber == rollNumber) {
            printf("Enter New Name: ");
            if (scanf(" %[^\n]s", student.name) != 1) {
                printf("Invalid input for Name!\n");
                fclose(file);
                return;
            }

            printf("Enter New Marks: ");
            if (scanf("%f", &student.marks) != 1) {
                printf("Invalid input for Marks!\n");
                fclose(file);
                return;
            }

            // Move the file pointer back by the size of a student record
            fseek(file, -sizeof(struct Student), SEEK_CUR);

            // Write the updated student record to the file
            fwrite(&student, sizeof(struct Student), 1, file);

            printf("Record updated successfully!\n");

            // Close the file
            fclose(file);
            return;
        }
    }

    printf("Record not found!\n");

    // Close the file
    fclose(file);
}

// Function to delete a student record by roll number
void deleteRecord() {
    int rollNumber;
    struct Student student;
    FILE *file, *tempFile;

    // Open the file in read mode
    file = fopen(FILE_NAME, "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Open a temporary file in write mode
    tempFile = fopen("temp.txt", "wb");

    if (tempFile == NULL) {
        printf("Error creating temporary file!\n");
        fclose(file);
        return;
    }

    printf("Enter Roll Number to delete: ");
    if (scanf("%d", &rollNumber) != 1) {
        printf("Invalid input for Roll Number!\n");
        fclose(file);
        fclose(tempFile);
        return;
    }

    // Copy all records except the one to be deleted to the temporary file
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.rollNumber != rollNumber) {
            fwrite(&student, sizeof(struct Student), 1, tempFile);
        }
    }

    // Close both files
    fclose(file);
    fclose(tempFile);

    // Delete the original file
    remove(FILE_NAME);

    // Rename the temporary file as the original file
    if (rename("temp.txt", FILE_NAME) == 0) {
        printf("Record deleted successfully!\n");
    } else {
        printf("Error deleting record!\n");
    }
}

// Function to compare two student records based on roll number (for sorting)
int compareByRollNumber(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;

    return studentA->rollNumber - studentB->rollNumber;
}

// Function to sort student records by roll number
void sortRecords() {
    struct Student students[100];
    FILE *file;
    int count = 0;

    // Open the file in read mode
    file = fopen(FILE_NAME, "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Read all student records into the array
    while (fread(&students[count], sizeof(struct Student), 1, file) == 1) {
        count++;
    }

    // Close the file
    fclose(file);

    // Sort the array of student records
    qsort(students, count, sizeof(struct Student), compareByRollNumber);

    // Open the file in write mode
    file = fopen(FILE_NAME, "wb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Write the sorted student records back to the file
    for (int i = 0; i < count; i++) {
        fwrite(&students[i], sizeof(struct Student), 1, file);
    }

    // Close the file
    fclose(file);

    printf("Records sorted successfully!\n");
}

// Function to search for a student record by roll number
void searchRecord() {
    int rollNumber;
    struct Student student;
    FILE *file;

    // Open the file in read mode
    file = fopen(FILE_NAME, "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Roll Number to search: ");
    if (scanf("%d", &rollNumber) != 1) {
        printf("Invalid input for Roll Number!\n");
        fclose(file);
        return;
    }

    // Search for the student record in the file
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.rollNumber == rollNumber) {
            printf("\n--- Student Record ---\n");
            printf("Roll Number: %d\n", student.rollNumber);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n", student.marks);

            // Close the file
            fclose(file);
            return;
        }
    }

    printf("Record not found!\n");

    // Close the file
    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Student Record Management ---\n");
        printf("1. Insert Record\n");
        printf("2. Display Records\n");
        printf("3. Update Record\n");
        printf("4. Delete Record\n");
        printf("5. Sort Records\n");
        printf("6. Search Record\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                insertRecord();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                updateRecord();
                break;
            case 4:
                deleteRecord();
                break;
            case 5:
                sortRecords();
                break;
            case 6:
                searchRecord();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
