#include<iostream>
using namespace std;

namespace namesp1{
	int values(){
		return 20;
	}
}

namespace namesp2{
	const double x=100;
	int values(){
		return 2*x;
	}
	
	}
	
		
	

int main(){
	
	cout<<"The value in namespace1 is: "<<namesp1::values()<<endl;
	cout<<"The value in namespace2 is: "<<namesp2::values()<<endl;
	cout<<"The value of x is: "<<namesp2::x<<endl;
	
	return 0;
	}
	
	
	
	
	
	