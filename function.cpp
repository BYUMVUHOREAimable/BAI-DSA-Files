//#include <iostream>  
//using namespace std;  
//
//void myFunction(int myNumbers[5]) {
//  for (int i = 0; i < 5; i++) {  
//    cout << myNumbers[i] << "\n";    
//  } 
//}
//
//int main() {  
//  int myNumbers[5] = {10, 20, 30, 40, 50};  
//  myFunction(myNumbers);
//  return 0;
//}  

//overloading a function: multiple functions can have the same name with different parameters
#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
