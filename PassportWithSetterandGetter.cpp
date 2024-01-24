#include<iostream>
using namespace std;
class Passport {
int passport_number;
string passport_name;
string country_of_origin;
public:
void setPassport_number(int passnum) {
passport_number = passnum;
}
void setPassport_name(string passname) {
passport_name = passname;
}
void setCountry_of_origin(string origin) {
country_of_origin = origin;
}
int getPassport_number() {
return passport_number;
}
string getPassport_name() {
return passport_name;
}
string getCountry_of_origin() {
return country_of_origin;
}
};
int main() {
Passport mypassport;
mypassport.setPassport_number(476896564);
mypassport.setPassport_name("Mugabo Jack");
mypassport.setCountry_of_origin("Rwanda");
cout << mypassport.getPassport_name() << "'s " 
<<mypassport.getCountry_of_origin()
<< " passport number is " << mypassport.getPassport_number();
return 0;
}