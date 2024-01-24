//#include <stdio.h>
//#include <stdlib.h>
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//float sum(float a, float b){
//	return a+b;
//}
//float sub(float a, float b){
//	return a-b;
//}
//float mult(float a, float b){
//	return a*b;
//}
//float divi(float a, float b){
//	return a/b;
//}
//
//int main(int argc, char *argv[]) {
//	int choice;
//	float a, b, result;
//	printf("Enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for div: \n");
//	scanf("%d", &choice);
//	printf("Enter the two numbers: \n");
//	scanf("%f %f",&a ,&b);
//	switch(choice){
//		case 0: result = sum(a, b);
//		break;	
//		case 1: result = sub(a, b);
//		break;
//		case 2: result = mult(a, b);
//		break;
//		case 3: result = divi(a, b);
//		break;
//	}
//	
//	printf("%f",result);
//	
//	return 0;
//	
//	return 0;
//}

//Designing a calculator usikng function pointer
//#include <stdio.h>
//#include <stdlib.h>
//
//float sum(float a, float b){
//	return a+b;
//}
//float sub(float a, float b){
//	return a-b;
//}
//float mult(float a, float b){
//	return a*b;
//}
//float divi(float a, float b){
//	return a/b;
//}
//
//int main() {
//	float (*ptrfunc[])(float, float) = {sum, sub, mult, divi};
//	int choice;
//	float a, b;
//	printf("Enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for div: \n");
//	scanf("%d", &choice);
//	printf("Enter the two numbers: \n");
//	scanf("%f %f",&a ,&b);
//	printf("%f", ptrfunc[choice] (a,b));
//	
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define ops 4
//
//float sum(float a, float b){
//	return a+b;
//}
//float sub(float a, float b){
//	return a-b;
//}
//float mult(float a, float b){
//	return a*b;
//}
//float divi(float a, float b){
//	return a/b;
//}
//
//int main() {
//	float (*ptrfunc[ops])(float, float) = {sum, sub, mult, divi};
//	int choice;
//	float a, b;
//	printf("Enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for div: \n");
//	scanf("%d", &choice);
//	printf("Enter the two numbers: \n");
//	scanf("%f %f",&a ,&b);
//	printf("%f", ptrfunc[choice] (a,b));
//	
//	return 0;
//}

#include <stdio.h>

// Function pointer type declaration
void (*AreaFunction)(float, float, float*, float*);

// Function to calculate area using width and height
void calculateArea(float width, float height, float *widthPtr, float *heightPtr) {
    *widthPtr = width;
    *heightPtr = height;
}

int main() {
    float width, height;

    // Assigning the function pointer
    AreaFunction = &calculateArea;

    printf("Enter the width and height of the rectangle:\n");
    scanf("%f %f", &width, &height);

    // Variables to store the addresses
    float *widthPtr, *heightPtr;
    widthPtr = &width;
    heightPtr = &height;

    // Printing the addresses of width and height
    printf("Address of width: %p\n", (void*)&width);
    printf("Address of height: %p\n", (void*)&height);

    // Calculating the area using the function pointer
    AreaFunction(width, height, widthPtr, heightPtr);

    // Accessing the values using the addresses
    float area = *widthPtr * *heightPtr;

    printf("The area of the rectangle is: %.2f \n", area);

    return 0;
}

