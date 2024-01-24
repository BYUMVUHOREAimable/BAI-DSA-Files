//#include <stdio.h>
//#include <stdlib.h>
//
//int area(int a, int b){
//	return a*b;
//}
//
//int main() {
//	int (*ptr)(int, int);
//	printf("Enter two sides of rectangle: \n");
//	scanf("%d %d",&area);
//	ptr=area;
//	printf("The area of rectangle is: %d cm^2",area);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//float mult(float a, float b){
//	return a*b;
//}
//
//int main() {
//	float (*ptrfunc[])(float, float) = {mult};
//	int mult;
//	float a, b;
//	printf("Enter the two numbers: \n");
//	scanf("%f %f",&a ,&b);
//	printf("The area of rectangle is: %.2f cm^2", ptrfunc[mult] (a,b));
//	return 0;
//}

#include<stdio.h>

// Function pointer type declaration
typedef double (*AreaFunction)(double, double);

// Function to calculate area using width and height
double calculateArea(double width, double height) {
    return width * height;
}

int main() {
    double width, height;

    // Assigning the function pointer
    AreaFunction areaFunc = &calculateArea;

    printf("Enter the width and height of the rectangle:\n");
    scanf("%lf %lf", &width, &height);

    // Calculating the area using the function pointer
    double area = areaFunc(width, height);

    printf("The area of the rectangle is: %.2lf\n", area);

    return 0;
}



