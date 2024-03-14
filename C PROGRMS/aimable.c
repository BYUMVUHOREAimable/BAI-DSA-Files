#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int x=7;
//	int y=10;
//	int sum=x+y;
//	if(sum%2==0){
//		printf("This is an even number");
//	}else{
//	
//	printf("My name is BYUMVUHORE Aimable");
//	}
//
//int age = 20;
//printf("\n Your age is: %d",age);
//
//age = 30;
//printf("\n New age is: %d", age);

//int x = 10;
//while ( (x--) >0 ) //goes to  0
//{
//	printf("%d", x);
//	printf(" \n%d",((x--)/3));
//	return 0;
//}

//int firstNumber = 33;
//printf("The fist Number is: %d", firstNumber);
//int secondNumber = firstNumber;
//printf("\nThe second Number is: %d", secondNumber);

//int number1 =33;
//printf("%d", number1);
//printf("%d", number1);

//Different Data types
//int were used
//double number = 12.45;
//float number1= 10.9f;
//printf("%.2lf",number);
//printf("\n%.1f",number1);

// double number = 2e6;
// printf("%lf",number);

//int age[5]={15,16,14,15,13};
//printf("%d",age[0]); //referenes the first value
//printf(" Sizeof(): %ld\n",sizeof(age));
////printf("lenghtof(age):%d\n",lenghtof(age));


//int two_d[2]3]  ={
//{5,2,1};
//{6;7;8};
//};

//Addition of Two Matrix
int A[3][3] ={
{2,4,5},
{3,7,5},
{2,0,1}

};

int B[3][3] = {
{1,0,5},
{3,6,5},
{2,0,1}
};
int r,c; //r for row and c for column

for(r=0;r<3;r++){ // e on row ach loop will be executed three times
	for(c=0;c<3;c++){
	printf("%d   ", A[r][c]+B[r][c]); // Space is for putting space btn elements=	
	}
	printf("\n");	//After each loop the items will go to the next line.
}
	
	return 0;
}
