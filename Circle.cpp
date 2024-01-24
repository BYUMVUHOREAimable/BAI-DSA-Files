#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
//area of circle and it circumference
	
	const double PI = 3.14159265;
	double radius;
	
	
	double area = PI*radius*radius;
	double circumference = 2*PI*radius;
	
	
	int num = 12;
	cout<<"This is the testing the setw()"<<endl;
	cout<<setw(10)<<num<<endl;
	
	cout<<"Enter the values of radius in cm: ";
	cin>>radius;
	
	cout<<"The radius value entered is: "<<radius<<endl;
	cout<<"The area is: "<<area<<" cm^2"<<endl;
	cout<<"The circumference is: "<<circumference<<" cm"<<endl;	
	
	
	return 0;
}