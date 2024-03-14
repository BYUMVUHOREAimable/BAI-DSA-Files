//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//  struct Person { //Person on this line can be there or not
//  int age;
//  string name;
//  float salary;
//  }Person1,Person2;
//  
//  cout<<"Information on first person: \n";
//  cout<<"---------------------------\n";
//  
//  cout<<"Enter your names: ";
//  getline(cin,Person1.name);
//  
//  cout<<"Enter your age: ";
//  cin>>Person1.age;
//  
//  cout<<"Enter your salary: ";
//  cin>>Person1.salary;
//  
//  cout<<"Information on first person: \n";
//  cout<<"---------------------------\n";
//  
//  cout<<"Enter your age: ";
//  cin>>Person2.age;
//  
//  cout<<"Enter your names: ";
//  cin>>Person2.name;
//  
//  
//  cout<<"Enter your salary: ";
//  cin>>Person2.salary;
//  
//  
//  cout<<"You are "<<Person1.name<<" who is "<<Person1.age<<" years old" <<" and your salary is "<<Person1.salary<<"\n";
//  cout<<"You are "<<Person2.name<<" who is "<<Person2.age<<" years old" <<" and your salary is "<<Person2.salary<<" Thank you.";
//  
//  return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Declare a structure named "car"
//struct car {
//  string brand;
//  string model;
//  int year;
//};
//
//int main() {
//  // Create a car structure and store it in myCar1;
//  car myCar1;
//  myCar1.brand = "BMW";
//  myCar1.model = "X5";
//  myCar1.year = 1999;
//
//  // Create another car structure and store it in myCar2;
//  car myCar2;
//  myCar2.brand = "Ford";
//  myCar2.model = "Mustang";
//  myCar2.year = 1969;
// 
//  // Print the structure members
//  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
//  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
// 
//  return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//  string food = "Pizza";
//
//  cout << &food;
//  return 0;
//}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";Pizza

  // Output the memory address of food
  cout << &food << "\n";//address of food

  // Access the memory address of food and output its value
  cout << *ptr << "\n";Pizza
  
  // Change the value of the pointer
  *ptr = "Hamburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";//Hamburger
  
  // Output the new value of the food variable
  cout << food << "\n";//Hamburger
  return 0;
}

