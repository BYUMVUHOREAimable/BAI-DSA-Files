#include <iostream>
using namespace std;

struct Student {
    int age;
    string name;
    string school;
    Student* next;

    Student() {}

    Student(int a, string n, string s) {
        age = a;
        name = n;
        school = s;
        next = NULL;
    }
};

void printList(Student* head) {
    // To print a linked list, we only need to know the first element called head
    while (head != NULL) {
        cout << "Age: " << head->age << ", Name: " << head->name << ", School: " << head->school << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int countNodes(Student* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

Student* searchStudentByName(Student* head, string targetName) {
    while (head != NULL) {
        if (head->name == targetName) {
            return head; // Found the student
        }
        head = head->next;
    }
    return NULL; // Student not found
}

Student* addToHead(Student* head, int age, string name, string school) {
    Student* newStudent = new Student(age, name, school);
    newStudent->next = head;
    return newStudent; // Return the new head
}

int main() {
    Student* n1 = new Student(10, "Mary", "RCA");
    Student* n2 = new Student(20, "Peter", "RCA");
    Student* n3 = new Student(30, "Divine", "RCA");

    n1->next = n2;
    n2->next = n3;

    Student* head = n1;
    head = addToHead(head, 8, "Aimable", "CXR");
    head = addToHead(head, 17, "BYUMVUHORE", "RCA");
    head = addToHead(head, 20, "IRADUKUNDA", "TTC Muhanga");
    cout << "Linked List:" << endl;
    printList(head);

    int nodeCount = countNodes(head);
    cout << "Number of nodes in the linked list: " << nodeCount << endl;

    string searchName = "Peter";
    Student* result = searchStudentByName(head, searchName);

    if (result != NULL) {
        cout << "Student found: Age - " << result->age << ", Name - " << result->name << ", School - " << result->school << endl;
    } else {
        cout << "Student with name '" << searchName << "' not found." << endl;
    }

    return 0;
}
