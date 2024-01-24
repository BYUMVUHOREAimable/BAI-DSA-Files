#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int rollNumber;
    std::string name;
    int age;
    int marks;

    Student(int rollNumber, const std::string& name, int age, int marks)
        : rollNumber(rollNumber), name(name), age(age), marks(marks) {}
};

bool isValidAge(int age) {
    return age >= 10 && age <= 30;
}

bool isValidMarks(int marks) {
    return marks >= 0 && marks <= 50;
}

bool isValidRollNumber(int rollNumber) {
    return rollNumber > 0;
}

void displayStudent(const Student& student) {
    std::cout << "Roll Number: " << student.rollNumber << "\n"
              << "Name: " << student.name << "\n"
              << "Age: " << student.age << "\n"
              << "Marks: " << student.marks << "\n\n";
}

void displayStudents(const std::vector<Student>& students) {
    for (const auto& student : students) {
        displayStudent(student);
    }
}

void saveStudentDataToCSV(const std::vector<Student>& students, const std::string& fileName) {
    std::ofstream outFile(fileName);
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing: " << fileName << std::endl;
        return;
    }

    outFile << "RollNumber,Name,Age,Marks\n";
    for (const auto& student : students) {
        outFile << student.rollNumber << "," << student.name << "," << student.age << "," << student.marks << "\n";
    }

    outFile.close();
}

void merge(std::vector<Student>& students, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<Student> leftArray(students.begin() + left, students.begin() + left + n1);
    std::vector<Student> rightArray(students.begin() + mid + 1, students.begin() + mid + 1 + n2);

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i].marks >= rightArray[j].marks) {
            students[k++] = leftArray[i++];
        } else {
            students[k++] = rightArray[j++];
        }
    }

    while (i < n1) {
        students[k++] = leftArray[i++];
    }

    while (j < n2) {
        students[k++] = rightArray[j++];
    }
}

void mergeSort(std::vector<Student>& students, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(students, left, mid);
        mergeSort(students, mid + 1, right);

        merge(students, left, mid, right);
    }
}

int main() {
    vector<Student> students = getStudentDataFromConsole();
    saveStudentDataToCSV(students, "student_data.csv");

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.marks > b.marks;
    });

    displayStudents(students);

    int totalMarks = 0;
    int distinctStudents = 0;

    for (const auto& student : students) {
        totalMarks += student.marks;
        ++distinctStudents;
    }

    double averageMarks = static_cast<double>(totalMarks) / distinctStudents;

    std::cout << "\nAverage Marks: " << averageMarks << " (for " << distinctStudents << " distinct students)\n";

    return 0;
}
