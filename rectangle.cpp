//#include <iostream>
//using namespace std;
//
//class Rectangle{
//private:
//	int length;
//    int width;
//
//public:
//int area(){
//	return length * width;
//}
//void set_Values(int w, int l){
//
//width =w;
//length=l;	
//}
//};
//
//int main(int argc, char** argv) {
//
//Rectangle rect;
//rect.set_Values(10,5);
//cout <<"The area is: " <<rect.area();	
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Rectangle{
//private:
//	int width;
//	int length;
//    
//public:
//int area(){
//	return length * width;
//}
//
//void set_Values(int w, int l);//Function declaration
//};
//void Rectangle::set_Values(int w, int l){
//	//function definition
//	width=w;
//	length=l;
//
//};
//
//int main(int argc, char** argv) {
//
//Rectangle rect;
//rect.set_Values(10,5);
//cout <<"The area is: " <<rect.area();	
//	
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Rectangle{
//private:
//	int width;
//	int length;
//    
//public:
//	Rectangle(int w, int l){
//		width =w;
//		length =l;
//	}
//	
//int area(){
//	return length * width;
//}
//};
//
//int main() {
//
//Rectangle rect(10,5);
//cout <<"The area is: " <<rect.area()<<endl;
//
//Rectangle rects{2,10};
//cout <<"The areB is: " <<rects.area()<<endl;
//
//Rectangle rectbb ={3,10};
//cout <<"The areBB is: " <<rectbb.area()<<endl;
//
//Rectangle *rectc = new Rectangle(4,10);
//cout <<"The area C is: "<<rectc -> area();
//	
//	return 0;
//}


#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int length;

public:
    Rectangle();
    Rectangle(int, int);
    void setDimensions(int, int);
    int area();
};

Rectangle::Rectangle() {
    width = 5;
    length = 5;
}

Rectangle::Rectangle(int w, int l) {
    width = w;
    length = l;
}

void Rectangle::setDimensions(int w, int l) {
    width = w;
    length = l;
}

int Rectangle::area() {
    return width * length;
}

int main() {
    Rectangle* recta = new Rectangle();
    Rectangle rectb(3, 4);

    cout << "The recta area is: " << recta->area() << endl;

    rectb.setDimensions(6, 7); // Set dimensions for rectb
    cout << "The rectb area is: " << rectb.area() << endl;

    delete recta; // Don't forget to delete the dynamic object

    return 0;
}
