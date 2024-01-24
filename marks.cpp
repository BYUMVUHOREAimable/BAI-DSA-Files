//#include<iostream>
//using namespace std;
//
//int main(){
//	
////	int marks1 = 10;
////	int marks2 = 20;
////	int marks3 = 30;
////	int marks4 = 25;
////	int marks5 = 23;
//	
////	int arr[5]={10,20,30,25,23};
////    int arr[5]={4,10,20,40,23};
////    int arr[5]={4,10,20,40,23};//will also work
////    int arr[5]{10,20,30,40,50};
////    
////    int size=sizeof(arr); //memory size
////    int number =sizeof(arr)/sizeof(int);//the size of elements
////    int number2 =sizeof(arr)/sizeof(arr[0]);//the size of elements
////    
////    int number3=end(arr)-begin(arr);
////    cout<<"The memory size: "<<size<<endl;
////    cout<<"The number of elements: "<<number<<endl;
////    cout<<"The number of elements: "<<number2<<endl;
////    cout<<number3;
//    
////    int arr[1]=7;//to change the value at 1 index
//    int arr[5];
//    cout<<"Reading elements: "<<endl;
//    int number=0;
//     for (int j=0;j<=number;j++){
//    	cout<<"Emlement"<<j<<":"<<endl;
//    	cin>>arr[j];
//	}
//	
//    for(int i=0;i<number;i++){
//    	cout<<arr[i];
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void addElement(int ele,int arr[],int position,int size){
//	int lastIndex=size-1;
//	while(lastIndex>=position){
//		arr[lastIndex+1]=arr[lastIndex];
//		lastIndex--;	
//	}
//	arr[position]=ele;
//}
//
//void deleteElement(int arr[],int size,int position){
//	int lastIndex=size-1;
//	while(position<lastIndex){
//		arr[position]=arr[position+1];
//		position++;
//}
//}
//int main(){
//    int arr[]={10,20,30,40,50};  
//	int size=sizeof(arr)/sizeof(arr[0]);
//	int position=2;
//	int ele=15;
//	
//	//calling function
//	addElement(ele,arr,position,size);
//	cout<<"After adding element at index"<<position<<endl;
//	//After adding print 10,20,15,30,40,50
//	for(int j=0;j<size+1;j++){
//		cout<<arr[j]<<endl;
//	}
//	
//	deleteElement(arr,6,position);
//	cout<<"After deleting element at index"<<position<<endl;
//	//print after deletion 10,20,30,40,50
//	for(int j=0;j<5;j++){
//		cout<<arr[j]<<endl;
//	}
//	
//	
//	return 0;
//}


//Multi-dimensional array
#include <iostream>
using namespace std;

int main(){
	
	int rows=3;
	int cols=3;
	
//	int arr[rows][cols]={
//		{10,20,30},
//		{40,50,60},
//		{70,80,90}
//	};
	
//	int arr[rows][cols]={
//		{10,20,30},
//		{40,50,60},
//		{70,80,90}
//	};
	
	int arr[][cols]={10,20,30,40,50,60,70,80,90};

	
	//print
//	for (int i=0;i<rows;i++){
//		for (int j=0;j<cols;j++){
//			cout<<arr[i][j]<<endl;
//		}
//	}
	cout<<"The third element is "<<arr[0][2]<<endl;
	cout<<"The fifth element is "<<arr[2][2]<<endl;
	//index=4; index=i*cols+j;
	
	return 0;
}

