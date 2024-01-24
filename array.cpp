////#include<iostream>
////using namespace std;
////int main(){
////
////
//////	int n=10;
////////	int scores[n]={};//to initialize array to 0
//////	int scores[n]={0};//to initialize array to 0
//////	
//////	for(int i=0;i<=n-1;i++){
//////		cout<<"The elements at index "<<i<<": ";
//////		cout<<scores[i]<<" "<<endl;
//////	}
////
//////int marks[6]={10,23,31,43,54,6};
//////
//////cout<<marks[2]<<endl; //3
//////
//////for(int i=0; i<6;i++){
//////	cout<<marks[i]<<" ";//10 23 31 43 54 6
//////}
//////
//////cout<<endl;
//////
//////int scores[9]={23,4,6};
//////for(int j=0;j<9;j++){
//////	cout<<scores[j]<<" ";//23 4 6 0 0 0 0 0 0
//////}
////
////
////int idNumber[6]={};
////for(int i=0;i<6;i++){
////	cout<<"Enter the values of an array at ["<<i<<"]:";
////	cin>>idNumber[i];
////}
////
////for(int j=0;j<6;j++){
////	cout<<"The values of an array at["<<j<<"]:";
////	cout<<idNumber[j]<<" "<<endl;
////}
////
////	return 0;
////}
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//  // method 1
//  // initializer list
//  vector<int> vector1 = {1, 2, 3, 4, 5};
//  // method 2
//  // uniform initialization
//  vector<int> vector2{6, 7, 8, 9, 10};
//  // method 3
////constructor initialization
//  vector<int> vector3(5, 12);
//  cout << "vector from method 1 = ";
//  for (int i = 0; i < vector1.size(); i++) {
//        cout << vector1[i] << " ";
//    }
//  
//  cout << "\n vector from method 2 = ";
//    for (int i = 0; i < vector2.size(); i++) {
//        cout << vector2[i] << " ";
//    }
//
//  cout << "\n vector from method 3 = ";
//   for (int i = 0; i < vector3.size(); i++) {
//        cout << vector3[i] << " ";
//    }
//  return 0;
//}

// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> g1;
for (int i = 1; i <= 5; i++)
g1.push_back(i);
cout << "Output of begin and end: ";
for (auto i = g1.begin(); i != g1.end(); ++i)
cout << *i << " ";
cout << "\nOutput of cbegin and cend: ";
for (auto i = g1.cbegin(); i != g1.cend(); ++i)
cout << *i << " ";
cout << "\nOutput of rbegin and rend: ";
for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
cout << *ir << " ";
cout << "\nOutput of crbegin and crend : ";	
for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
cout << *ir << " ";
return 0;
}