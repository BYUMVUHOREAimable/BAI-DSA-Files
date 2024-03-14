#include <stdio.h>
#include <string.h>

struct address {
    char street[50];
    char city[50];
    char state[50];
    int zipcode;
};

struct student {
    char name[50];
    int id;
    float gpa;
    struct address addr;
};

int main() {
    struct student s1;

    // Getting student details from user
    printf("Enter student name: ");
    fgets(s1.name, 50, stdin);

    printf("Enter student ID: ");
    scanf("%d", &s1.id);

    printf("Enter student GPA: ");
    scanf("%f", &s1.gpa);

    printf("Enter student address:\n");
    printf("Street: ");
    fgets(s1.addr.street, 50, stdin);

    printf("City: ");
    fgets(s1.addr.city, 50, stdin);

    printf("State: ");
    fgets(s1.addr.state, 50, stdin);

    printf("Zipcode: ");
    scanf("%d", &s1.addr.zipcode);

    // Printing student details
    printf("\nStudent record:\n");
    printf("Name: %s", s1.name);
    printf("ID: %d\n", s1.id);
    printf("GPA: %.2f\n", s1.gpa);
    printf("Address: %s, %s, %s, %d\n", s1.addr.street, s1.addr.city, s1.addr.state, s1.addr.zipcode);

    return 0;
}