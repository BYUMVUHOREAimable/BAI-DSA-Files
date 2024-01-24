#include<iostream>;
using namespace std;
class Student{
	//you can use get and set and alternatively you can make all members public because as default the members of a class are private
	public:
	string name;
	int age;
	string school;
	Student(){
	
	};
	
	Student(string n,int a,string sch){
		name=n;
		age=a;
		school=sch;
	};
	
};
int main(){
	
	class Student st("John",12,"RCA");
	cout<<st.name<<st.age<<st.school<<endl;
	
	//we use this when we have a default constructor
	Student st2;
	st2.name="Mary";
	st2.age=12;
	st2.school="RCA";
	cout<<st2.name<<st2.age<<st2.school<<endl;
	
	Student *st3=new Student("Victor",18,"RCA");
	cout<<"Name:"<<(*st3).name<<"Age:"<<(*st3).age<<"School:"<<(*st3).school<<endl;
	cout<<st3->name<<st3->age<<st3->school<<endl;
	
	Student st4=Student("Divine",14,"RCA");
	cout<<st4.name<<st4.age<<st4.school<<endl;
	
//	Student s{"Peter",15,"RCA"};
//	Student s={"Peter",16,"RCA"};

	return 0;
}