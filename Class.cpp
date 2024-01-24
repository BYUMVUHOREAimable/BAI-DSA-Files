#include <iostream>
using namespace std;
class Student{
	public:
int id;  
string name; 
string school; 
string level;   
char group;
};
void print_student(Student s){
cout<<s.id<<endl;
cout<<s.name<<endl;
cout<<s.school<<endl;
cout<<s.level<<endl;
cout<<s.group<<endl;
}

Student make(Student mj){
mj.name="Mugabo Javis";
mj.id=32;
mj.school="RCA";
mj.level="Year2";
mj.group='A';
return  mj;
}

int main()
{
  Student st;
  Student s=make(st);
cout<<"Display student Information:"<<endl;
print_student(s);
return 0;
}

