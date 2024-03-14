#include <stdio.h>
int main (){
	const double PI=3.14159;
	double radius;
	double circumference;
	double area;
	printf("Enter the value of radius in cm: ");
	scanf("%lf",&radius);
	circumference =2 * PI * radius;
	area = PI * radius * radius;
	printf("The circumference of the circle is: %.2lf cm \n",circumference);
	printf("The area of the circle is: %.2lf cm^2\n",area);
	return 0;
}