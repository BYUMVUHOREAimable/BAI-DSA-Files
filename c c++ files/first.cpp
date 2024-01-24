#include <iostream>
using namespace std;
string fname = "Muhire";
namespace groupd{
  string fname = "Mahoro";
}
int main()
{
  // int fname=5;
  string fname;
  std::cout<<"Enter your name"<<endl;
  //std::cin >> fname;
  getline(cin, fname);
  std::cout<<"Hello "<<::fname<<endl;
  std::cout << "Hello "<< fname << endl;
  std::cout << "Hello " << groupd::fname << endl;

  return 0;
}

#include <iostream>
#include <string>

int main() {
    // Declare variables to store user input
    std::string firstName, lastName;
    int age;

    // Prompt the user for input
    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Display the user's information in one line
    std::cout << "Name: " << firstName << " " << lastName << ", Age: " << age << std::endl;

    return 0;
}


#include <iostream>
#include <string>
#include <cmath>

int main() {
    // Declare variables to store user input
    std::string fullName;
    double initialAmount, annualInterestRate, paymentTime;

    // Prompt the user for input
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Enter the initial amount: ";
    std::cin >> initialAmount;

    std::cout << "Enter the annual interest rate (%): ";
    std::cin >> annualInterestRate;

    std::cout << "Enter the payment time (in years): ";
    std::cin >> paymentTime;

    // Calculate the total interest
    double interestRateDecimal = annualInterestRate / 100.0;
    double totalInterest = initialAmount * interestRateDecimal * paymentTime;

    // Display the total interest
    std::cout << "Dear " << fullName << ", the total interest on your investment will be: $" << totalInterest << std::endl;

    return 0;
}
