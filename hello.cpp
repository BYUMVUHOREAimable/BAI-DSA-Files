//#include <iostream>
//using namespace std;
//template<typename T,typename GroupD>
//T addition(T a, GroupD b){
//	return a+b;
//}
///*
//int addition(int a, int b){
//	return a+b;
//}
//double addition(double a, double b){
//	return a+b;
//}
//*/
//int main(){
//	int num1, num2;
//	cout<<"Enter the two numbers: " <<endl;
//	cin>>num1>> num2;
//	cout << "The sum of num 1 and num 2 is: "<< addition(num1,num2) << endl;
//
////cin.ignore();
//	
//	double num3, num4;
//	cout<<"Enter the two numbers" <<endl;
//	cin>>num3>> num4;
//	cout << "The sum of num3 and num4 is"<< addition(num3,num4) << endl;
//
//return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={1,3,4,5,6,8,9};
//	int odd = 0;
//	int even = 0;
//	int lenght = sizeof(arr)/sizeof(arr[0]);
//	
//	for (int i=0; i <lenght; i++){
//		if(arr[i]%2 ==0){
//			cout<<"The number is even number" <<endl;
//		}else{
//			cout<<"The number is odd number" <<endl;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int array[]={2,3,4,1,5,8,9};
//	int odd = 0;
//	int even =0;
//	int length = sizeof(array)/sizeof(array[0]);
//	for (int i=0;i<length;i++){
//		if (array[i]%2==0){
//			even++;
//		}else{
//			odd++;
//		}
//	}
//	cout << "The even numbers: " <<even<<endl;
//	cout << "The odd numbers: " <<odd;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void printFunction(){
//	int i = 1;
//	while (i <= 20){
//		cout <<i <<"" <<endl;
//		i++;
//	}
//}
//int main(){
//	printFunction();
//	return 0;
//}

#include <iostream>
using namespace std;

int main(){
	string s;
	cout<<"Enter a sting: ";
	getline(cin, s);
	
	cout<<"You have entered: ";
	cout<<s<<endl;
	
//	s.push_back('B');//add a character at the end of a string
//	cout<<"After using push back: "<<s<<endl;
	
	s.pop_back();//remove a character at the end of a string 
	cout<<"After using pop back: "<<s<<endl;
	
	return 0;
}


