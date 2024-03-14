//To calculate the sum of two numbers
//#include<iostream>
//using namespace std;
//
//int main() {
//    double num1, num2;
//    cout<<"Enter the value of num1: ";
//    cin>>num1;
//    cout<<"Enter the value of num2: ";
//    cin>>num2;
//	double sum = num1 + num2;
//    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
//    return 0;
//}

////To swapp numbers
//#include<iostream>
//using namespace std;
//
//int main() {
//    double num1, num2;
//    cout<<"Enter the value of num1: ";
//    cin>>num1;
//    cout<<"Enter the value of num2: ";
//    cin>>num2;
//    cout << "Before swapping: " << endl;
//    cout << "First number: " << num1 << endl;
//    cout << "Second number: " << num2 << endl;
//    // swapping logic
//    double temp = num1;
//    num1 = num2;
//    num2 = temp;
//    cout << "After swapping: " << endl;
//    cout << "First number: " << num1 << endl;
//    cout << "Second number: " << num2 << endl;
//    return 0;
//}

//To calculate the volume of sphere
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() {
//    double radius;
//    const double pi = 3.14159;
//    cout << "Enter radius of the sphere: ";
//    cin >> radius;
//    double volume = (4.0 / 3.0) * pi * pow(radius, 3);
//    cout << "Volume of the sphere: "<< volume <<" in used unit cubed ";
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//    int sum = 0;
//    for(int i = 2; i < 100; i += 2) {
//        sum += i;
//    }
//    cout << "Sum of even numbers less than 100: " << sum << endl;
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int fib(int n){
/// Base case
if(n==0){
return 0;
}
if(n==1){
return 1;
}
/// Recursive case
int smallOutput1 = fib(n-1);
int smallOutput2 = fib(n-2);
/// calculation
return smallOutput1 + smallOutput2;
}
int main(){
cout<<fib(3);
return 0;
}


