#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Define a structure for student
struct Student {
    string name;
    int age;
    float gpa;
};

// Function to write student data to a file
void writeToFile(const Student& student, const string& filename) {
    ofstream file(filename, ios::app); // Open file in append mode
    if (file.is_open()) {
        file << student.name << "," << student.age << "," << student.gpa << endl;
        file.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
}

// Function to read student data from a file and display it on console
void readFromFile(const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        cout << "Reading data from file:" << endl;
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

int main() {
    // Create a student object
    Student student1 = {"John Doe", 20, 3.5};

    // Write student data to file
    writeToFile(student1, "students.csv");

    // Read student data from file and display it
    readFromFile("students.csv");

    return 0;
}
