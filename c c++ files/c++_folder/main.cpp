//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main(){
//cout << setw(9) << 8.25 << endl;
//cout << setw(20)<< "Hello!"<< endl;
//cout<<setprecision(2)<<fixed<<1234.56789<< endl;
//cout<<setprecision(3)<<scientific<<1234.56789<< endl;
//return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//int value = 65;
//char letter = 'B';
//cout << "The following is display of formatted output" << endl;
//cout << "decimal: " << dec<<value << endl;
//cout << "octal:" << oct<<value << endl;
//cout << "hexadecimal"<< hex<<value <<endl;
//return 0;
//}

//# include <iostream>
//using namespace std;
//int main(){
//cout << "Name\t orange\t mango\t apple \n";
//cout << "John :\t 3 \t 5 \t 8"<< endl;
//cout << "Janet:\t 4 \t 5 \t 7"<< endl;
//cout <<"Peter:\t 5 \t 3 \t 6"<< endl;
//return 0;}

//#include <iostream>
//#include <string>
//
//namespace arithmetic {
//    int add(int a, int b) {
//        return a + b;
//    }
//
//    int subtract(int a, int b) {
//        return a - b;
//    }
//
//    int multiply(int a, int b) {
//        return a * b;
//    }
//
//    int divide(int a, int b) {
//        if (b != 0) {
//            return a / b;
//        } else {
//            std::cout << "Error: Division by zero!" << std::endl;
//            return 0;
//        }
//    }
//
//    int modulus(int a, int b) {
//        if (b != 0) {
//            return a % b;
//        } else {
//            std::cout << "Error: Modulus by zero!" << std::endl;
//            return 0;
//        }
//    }
//}
//
//int main() {
//    using namespace std;
//    char continueChoice;
//
//    do {
//        cout << "MENU" << endl;
//        cout << "1. Add" << endl;
//        cout << "2. Subtract" << endl;
//        cout << "3. Multiply" << endl;
//        cout << "4. Divide" << endl;
//        cout << "5. Modulus" << endl;
//        cout << "Enter your choice: ";
//        
//        int choice;
//        cin >> choice;
//
//        cout << "Enter your two numbers: ";
//        int num1, num2;
//        cin >> num1 >> num2;
//
//        int result;
//
//        switch (choice) {
//            case 1:
//                result = arithmetic::add(num1, num2);
//                break;
//            case 2:
//                result = arithmetic::subtract(num1, num2);
//                break;
//            case 3:
//                result = arithmetic::multiply(num1, num2);
//                break;
//            case 4:
//                result = arithmetic::divide(num1, num2);
//                break;
//            case 5:
//                result = arithmetic::modulus(num1, num2);
//                break;
//            default:
//                cout << "Invalid choice!" << endl;
//                continue;
//        }
//
//        cout << "Result: " << result << endl;
//
//        cout << "Continue? (y/n): ";
//        cin >> continueChoice;
//
//    } while (continueChoice == 'y' || continueChoice == 'Y');
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int sum(int k){
//	if (k==0){
//		return 0;
//	}
//	
//if (k==1){
//		return 1;
//
//}
//
//int smallAnswer = sum(k-1);
//return k+smallAnswer;
//}
//
//int main(){
//	
//	cout<<"The sum is: "<<sum(1000)<<endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int fib(int n){
//	if (n==0){
//		return 0;
//	}
//	if (n==1){
//		return 1;
//	}
//	
//	int smallOutput1= fib(n-1);
//	int smallOutput2 = fib(n-2);
//	return smallOutput1 + smallOutput2;
//}
//
//int main(){
//	
//	cout<<fib(10);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void printNumbers(int N) {
//    if (N > 0) {
//        printNumbers(N - 1);  // Recursive call
//        cout << N << " ";
//    }
//}
//
//int main() {
//    int N;
//    cout << "Enter a positive integer: ";
//    cin >> N;
//    cout << "Numbers from 1 to " << N << " in recursive order: ";
//    printNumbers(N);
//    cout << endl;
//    return 0;
//}

#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);  // Recursive call to calculate factorial
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is: " << result << endl;
    }
    
    return 0;
}


