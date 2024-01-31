
#include<iostream>
using namespace std;
struct Student{
int age;
string name;
string school;
Student *next;
Student(){}
Student(int a, string n, string s){
age=a;
name=n;
school=s;
next=NULL;
}
void printDetails(){
cout<<"age:"<<age<<" name:"<< name<<" school:"<<school<<endl;
}
};
void printList(Student *head){
while(head!=NULL){
cout<<"age:"<<head->age<<" name:"<<head->name<<" school:"<<head->school<<"->";
head=head->next;
cout<<endl;
}
cout<<"NULL"<<endl;
}
Student* addAtHead(Student *head, int age, string name, string school){
Student *newStudent=new Student(age,name,school);
newStudent->next=head;
head=newStudent;
return head;
}
Student* addAtHead(Student *head, Student *newStudent){

newStudent->next=head;
head=newStudent;
return head;
}
int main(){
struct Student s1(18,"Mary", "RCA");
Student s2=Student(10, "Mike","RCA");
Student *s3=new Student(20,"Divin","RhCA");
Student *s4=new Student(25,"D'Amour","RCA");
Student s5(17,"Kamanzi","Nyabihu Tvet");
s1.next=&s2;
s2.next=s3;
s3->next=s4;
s4->next=&s5;
Student *head=&s1;
printList(head);
delete s3;
delete s4;
return 0;
}