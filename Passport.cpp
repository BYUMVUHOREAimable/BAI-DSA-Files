#include<iostream>
#include<string>
using namespace std;

class Passport{
	private:
	 string country_of_orign="Rwanda";
	public:
	 int passport_number;
	 string passport_name;
	void dothis(){
		cout<<passport_name;
		cout<<"'s ";
		cout<<country_of_orign;
		cout<<" passport number is "<<passport_number;
	}	
};

int main(){
	Passport mypassport;
	mypassport.passport_number=45678;
	mypassport.passport_name="BYUMVUHORE Aimable";
	mypassport.dothis();
	
	return 0;
}