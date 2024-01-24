#include <iostream>
using namespace std;

//you can use class instead of struct
struct Rectangle{
	int width, height;
	public:
		void set_values(int,int);
		int area(){
			return width*height;
		}
};

void Rectangle::set_values(int x, int y){
	width = x;
	height = y;
}

int main(){
	Rectangle rect;
	Rectangle rectb;
	
	int a,b;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	rect.set_values(a,b);
	
	rectb.set_values(5,10);
	cout<<"The area rect is: "<<rect.area()<<endl;
	cout<<"The area rectb is: "<<rectb.area()<<endl;
	return 0;
}