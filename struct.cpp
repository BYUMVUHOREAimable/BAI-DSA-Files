#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    string school;

    Student() {}

    Student(string n, int a, string sch) {
        name = n;
        age = a;
        school = sch;
    }
};

int main() {
    // Creating and initializing a student using a parameterized constructor
    struct Student st("John", 12, "RCA");
    cout << "Name: " << st.name << ", Age: " << st.age << ", School: " << st.school << endl;

    // Using default constructor and setting values individually
    Student st2;
    st2.name = "Mary";
    st2.age = 12;
    st2.school = "RCA";
    cout << "Name: " << st2.name << ", Age: " << st2.age << ", School: " << st2.school << endl;

    // Using dynamic allocation and arrow operator
    Student* st3 = new Student("Victor", 18, "RCA");
    cout << "Name: " << st3->name << ", Age: " << st3->age << ", School: " << st3->school << endl;
    delete st3; // Freeing dynamically allocated memory

    // Using alternative constructor syntax
    Student st4 = Student("Divine", 14, "RCA");
    cout << "Name: " << st4.name << ", Age: " << st4.age << ", School: " << st4.school << endl;

    // Uncommented code with alternative constructor syntax
    // Student s{"Peter",15,"RCA"};
    // Student s={"Peter",16,"RCA"};

    return 0;
}
