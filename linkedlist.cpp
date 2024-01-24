#include <iostream>
using namespace std;

//template <typename T>

struct Student {
    int age;
    string name;
    string school;
    Student *next;

    Student() {}

    Student(int a, string n, string s) {
        age = a;
        name = n;
        school = s;
        next = NULL;
    }
};

void printList(Student *head) {
    // To print a linked list, we only need to know the first element called head
    while (head != NULL) {
        cout << "Age: " << head->age << ", Name: " << head->name << ", School: " << head->school << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Student* n1 = new Student(10, "Mary", "RCA");
    Student* n2 = new Student(20, "Peter", "RCA");
    Student* n3 = new Student(30, "Divine", "RCA");

    n1->next = n2;
    n2->next = n3;

    printList(n1);

    return 0;
}
