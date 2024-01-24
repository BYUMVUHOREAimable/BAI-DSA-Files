#include<iostream>
using namespace std;
struct Student{
int id;  
string name; 
string school; 
string level;   
char group;
};

int main(){
	Student student;
    cout << "Enter i: ";
    cin>>student.id;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin,student.name);
    cout << "Enter school: ";
    getline(cin,student.school);
    cout << "Enter level: ";
    getline(cin,student.level);
    cout << "Enter group: ";
    cin>>student.group;
    cout<<"Display student Information:"<<endl;
    cout<<student.id<<endl;
    cout<<student.name<<endl;
    cout<<student.school<<endl;
    cout<<student.level<<endl;
    cout<<student.group<<endl;


	
	return 0;
}