
//Answer for question 1
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//    double radius;
//
//public:
//    // Constructor to initialize the radius
//    Circle(double r) {
//        radius = r;
//    }
//
//    // Function to calculate and return the area of the circle
//    double calculateArea() {
//        return 3.14159 * radius * radius;
//    }
//
//    // Function to calculate and return the circumference of the circle
//    double calculateCircumference() {
//        return 2 * 3.14159 * radius;
//    }
//};
//
//int main() {
//    // Creating a Circle object with radius 5
//    Circle myCircle(5);
//
//    // Calculating and displaying the area of the circle
//    cout << "Area of the circle: " << myCircle.calculateArea() << endl;
//
//    // Calculating and displaying the circumference of the circle
//    cout << "Circumference of the circle: " << myCircle.calculateCircumference() << endl;
//
//    return 0;
//}

////Answer for question2
//#include <iostream>
//using namespace std;
//
//class Rectangle {
//private:
//    double length;
//    double width;
//
//public:
//    // Constructor to initialize length and width
//    Rectangle(double l, double w) {
//        length = l;
//        width = w;
//    }
//
//    // Function to calculate and return the area of the rectangle
//    double calculateArea() {
//        return length * width;
//    }
//
//    // Function to calculate and return the perimeter of the rectangle
//    double calculatePerimeter() {
//        return 2 * (length + width);
//    }
//};
//
//int main() {
//    // Creating a Rectangle object with length 5 and width 3
//    Rectangle myRectangle(5, 3);
//
//    // Calculating and displaying the area of the rectangle
//    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;
//
//    // Calculating and displaying the perimeter of the rectangle
//    cout << "Perimeter of the rectangle: " << myRectangle.calculatePerimeter() << endl;
//
//    return 0;
//}

//answer for question 3
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Person {
//private:
//    string name;
//    int age;
//    string country;
//
//
//public:
//    // Function to set the person's information
//    void setInfo(string n, int a, string c) {
//        name = n;
//        age = a;
//        country = c;
//    }
//
//
//    // Function to display the person's information
//    void displayInfo() {
//        cout << "Name: " << name << endl;
//        cout << "Age: " << age << endl;
//        cout << "Country: " << country << endl;
//    }
//};
//
//
//int main() {
//    // Creating a Person object and setting its information
//    Person person1;
//    person1.setInfo("John", 30, "USA");
//
//
//    // Displaying the person's information
//    person1.displayInfo();
//
//
//    return 0;
//}

////answer for question 4
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car {
//private:
//    string company;
//    string model;
//    int year;
//
//public:
//    // Function to set the car's information
//    void setInfo(string c, string m, int y) {
//        company = c;
//        model = m;
//        year = y;
//    }
//
//    // Function to display the car's information
//    void displayInfo() {
//        cout << "Company: " << company << endl;
//        cout << "Model: " << model << endl;
//        cout << "Year: " << year << endl;
//    }
//};
//
//int main() {
//    // Creating a Car object and setting its information
//    Car myCar;
//    myCar.setInfo("Toyota", "Corolla", 2022);
//
//    // Displaying the car's information
//    myCar.displayInfo();
//
//    return 0;
//}

//question 5
//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    int accountNumber;
//    double balance;
//
//public:
//    // Constructor to initialize account number and balance
//    BankAccount(int accNum, double bal) {
//        accountNumber = accNum;
//        balance = bal;
//    }
//
//    // Function to deposit money into the account
//    void deposit(double amount) {
//        balance += amount;
//    }
//
//    // Function to withdraw money from the account
//    void withdraw(double amount) {
//        if (amount <= balance) {
//            balance -= amount;
//        } else {
//            cout << "Insufficient balance!" << endl;
//        }
//    }
//
//    // Function to display the account balance
//    void displayBalance() {
//        cout << "Account Number: " << accountNumber << endl;
//        cout << "Balance: $" << balance << endl;
//    }
//};
//
//int main() {
//    // Creating a BankAccount object with account number 12345 and initial balance $1000
//    BankAccount myAccount(12345, 1000);
//
//    // Depositing $500 into the account
//    myAccount.deposit(500);
//
//    // Withdrawing $200 from the account
//    myAccount.withdraw(200);
//
//    // Displaying the account balance
//    myAccount.displayBalance();
//
//    return 0;
//}


// learn for my own
#include <iostream>
using namespace std;

void Add(){
	double num1;
	double num2;
	double sum=num1+num2;
	return sum;

int main(){
	
	cout<<"Enter the value of num1: ";
	cin>>num1;
	
	cout<<"Enter the value of num2: ";
	cin>>num2;
	cout<<"The sum is: "<<Add();
	return 0;
}
