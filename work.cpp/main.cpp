//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    // Declare variables to store user input
//    std::string fullName;
//    int age;
//
//    // Prompt the user for input
//    std::cout << "Enter your full name: ";
//    getline(cin, fullName);
//
//    //std::cout << "Enter your last name: ";
//    //std::cin >> lastName;
//
//    std::cout << "Enter your age: ";
//    std::cin >> age;
//
//    // Display all the information in one line
//    std::cout << "You are " << fullName <<" and you have " <<age <<" years old.";
//
//    return 0;
//}

#include <iostream>
#include <string>
using namespace std; 

int main() {
    // Declare variables to store user input
    string fullName;
    double initialAmount, annualInterestRate, paymentTime;

    // Prompt the user for input
    cout << "Enter your full name: ";
    getline(cin, fullName);  // Read the full name with spaces

    cout << "Enter the initial amount: $";
    cin >> initialAmount;

    cout << "Enter the annual interest rate (%): ";
    cin >> annualInterestRate;

    cout << "Enter the payment time (in years): ";
    cin >> paymentTime;

    // Calculate the total interest
    double interestRateDecimal = annualInterestRate / 100.0;
    double totalInterest = initialAmount * interestRateDecimal * paymentTime;

    // Display the total interest
    cout << "Dear " << fullName << ", the total interest on your investment will be: $" << totalInterest <<endl;

    return 0;
}
