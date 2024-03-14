
////answers for first question
//#include <stdio.h>
//
//int main() {
//    int n, i = 1;
//    printf("Enter the value for n number: ");
//    scanf("%d",&n);
//    printf("Numbers from 1 to %d are:\n", n);
//    while (i <= n) {
//        printf("%d ", i);
//        i++;
//    }
//    printf("\n");
//    return 0;
//}

//second qwestion
#include <stdio.h>
#include <stdlib.h>

struct Car {
    char color[20];
    int doors;
    int numberOfSeats;
};

int main() {
    struct Car* car1;
    struct Car* car2;

   // Allocate memory for car1
    car1 = (struct Car*)malloc(sizeof(struct Car));

    // Read values for car1 from the user
    printf("Enter values for member elements of car 1:\n");
   
    //printf("Enter the Doors of Car 1: ");
    scanf("%d", &(car1->doors));
    
    //printf("Enter the number of seats in Car 1: ");
    scanf("%d", &(car1->numberOfSeats));
    
    //printf("Enter the color of Car 1: ");
    scanf("%s", car1->color);


    // Allocate memory for car2
    car2 = (struct Car*)malloc(sizeof(struct Car));

    // Read values for car2 from the user
    printf("Enter values for member elements of car 2:\n");
    
    //printf("Enter the Doors of Car 2: ");
    scanf("%d", &(car2->doors));
    
    //printf("Enter the number of seats in Car 2: ");
    scanf("%d", &(car2->numberOfSeats));
    
    //printf("Enter the color of Car 2: ");
    scanf("%s", car2->color);


    // Print the details of car1
    printf("\nValues you gave for car 1:\n");
    printf("Doors: %d\n", car1->doors);
    printf("Sits: %d\n", car1->numberOfSeats);
    printf("Color: %s\n", car1->color);

    // Print the details of car2
    printf("\nValues you gave for car 2:\n");
    printf("Doors: %d\n", car2->doors);
    printf("Sits: %d\n", car2->numberOfSeats);
    printf("Color: %s\n", car2->color);

    // Free the allocated memory
    free(car1);
    free(car2);

    return 0;
}













//for printing sqware
//
//#include<stdio.h>
//int main(){
//	int i,j;
//	printf("Enter number of rows:");
//	scanf("%d",i);
//	for(i=0;i<5;i++){
//		for(j=0;j<10;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////for printing half pyramid of numbers
//
//#include<stdio.h>
//int main(){
//	int i,j,rows;
//	printf("Enter number of row:");
//	scanf("%d",&rows);
//	for(i=1;i<=rows;i++){
//		
//		for(j=1;j<=rows;j++){
//		
//		if((i+j)<=rows)
//			printf(" ");
//		else
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int i, j;
//
//    // Outer loop for numbers from 1 to 4
//    for (i = 1; i <= 4; i++) {
//        printf("Multiplication table of %d:\n", i);
//
//        // Inner loop for multiplication up to 10
//        for (j = 1; j <= 10; j++) {
//            printf("%d x %d = %d\n", i, j, i * j);
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int num;
//
//    while (1) {
//        printf("Enter a number (or 'e' to exit): ");
//        if (scanf("%d", &num) != 1) {
//            // Character 'e' is entered, exit the program
//            break;
//        }
//
//        if (num == 0) {
//            printf("Number is zero.\n");
//        } else if (num > 0) {
//            printf("Number is positive.\n");
//        } else {
//            printf("Number is negative.\n");
//        }
//    }
//
//    printf("Program has ended.\n");
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int number;
//    unsigned long long factorial = 1;
//
//    printf("Enter a number: ");
//    scanf("%d", &number);
//
//    if (number < 0) {
//        printf("Factorial of a negative number is undefined.\n");
//    } else {
//        // Calculate the factorial using a for loop
//        for (int i = 1; i <= number; i++) {
//            factorial *= i;
//        }
//
//        printf("Factorial of %d = %llu\n", number, factorial);
//    }
//
//    return 0;
//}




















//#include <stdio.h> 
//int main()
//{
//int * pc, c;
//c = 22;
//printf("Address of c: %p\n", &c); 
//printf("Value of c: %d\n\n", c);
//pc = &c;
//printf("Address of c: %p\n", pc);
//printf("Content pointed by pc: %d\n\n", *pc);
//c = 11;
//printf("Address of c: %p\n", pc);
//printf("Content pointed by pc: %d\n\n", *pc);
//// a pointer can change the value of a variable
//*pc = 2;
//printf("Address of c: %p\n", &c); 
//printf("Value of c: %d\n\n", c); 
//return 0;
//}

//code for multiplying two matrices
//#include <stdio.h>

//#define MAX_SIZE 10
//
//void multiplyMatrices(int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE], int rowsA, int colsA, int colsB) {
//    int i, j, k;
//
//    for (i = 0; i < rowsA; i++) {
//        for (j = 0; j < colsB; j++) {
//            C[i][j] = 0;
//
//            for (k = 0; k < colsA; k++) {
//                C[i][j] += A[i][k] * B[k][j];
//            }
//        }
//    }
//}
//
//void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
//    int i, j;
//
//    for (i = 0; i < rows; i++) {
//        for (j = 0; j < cols; j++) {
//            printf("%d\t", matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
//    int rowsA, colsA, rowsB, colsB;
//    int i, j;
//
//    printf("Enter the number of rows and columns for matrix A: ");
//    scanf("%d %d", &rowsA, &colsA);
//
//    printf("Enter the elements of matrix A:\n");
//    for (i = 0; i < rowsA; i++) {
//        for (j = 0; j < colsA; j++) {
//            scanf("%d", &A[i][j]);
//        }
//    }
//
//    printf("Enter the number of rows and columns for matrix B: ");
//    scanf("%d %d", &rowsB, &colsB);
//
//    printf("Enter the elements of matrix B:\n");
//    for (i = 0; i < rowsB; i++) {
//        for (j = 0; j < colsB; j++) {
//            scanf("%d", &B[i][j]);
//        }
//    }
//
//    if (colsA != rowsB) {
//        printf("Matrix multiplication is not possible.\n");
//    } else {
//        multiplyMatrices(A, B, C, rowsA, colsA, colsB);
//
//        printf("Resultant matrix C:\n");
//        displayMatrix(C, rowsA, colsB);
//    }
//
//    return 0;
//}
//

//#include <stdio.h>
//
//void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
//void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
//void display(int mult[][10], int rowFirst, int columnSecond);
//
//int main()
//{
//	int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;
//
//	printf("Enter rows and column for first matrix: ");
//	scanf("%d %d", &rowFirst, &columnFirst);
//
//	printf("Enter rows and column for second matrix: ");
//	scanf("%d %d", &rowSecond, &columnSecond);
//
//	// If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
//	while (columnFirst != rowSecond)
//	{
//		printf("Error! column of first matrix not equal to row of second.\n");
//		printf("Enter rows and column for first matrix: ");
//		scanf("%d%d", &rowFirst, &columnFirst);
//		printf("Enter rows and column for second matrix: ");
//		scanf("%d%d", &rowSecond, &columnSecond);
//	}
//
//	// Function to take matrices data
//        enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);
//
//        // Function to multiply two matrices.
//        multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);
//
//        // Function to display resultant matrix after multiplication.
//        display(mult, rowFirst, columnSecond);
//
//	return 0;
//}
//
//void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
//{
//	int i, j;
//	printf("\nEnter elements of matrix 1:\n");
//	for(i = 0; i < rowFirst; ++i)
//	{
//		for(j = 0; j < columnFirst; ++j)
//		{
//			printf("Enter elements a%d%d: ", i + 1, j + 1);
//			scanf("%d", &firstMatrix[i][j]);
//		}
//	}
//
//	printf("\nEnter elements of matrix 2:\n");
//	for(i = 0; i < rowSecond; ++i)
//	{
//		for(j = 0; j < columnSecond; ++j)
//		{
//			printf("Enter elements b%d%d: ", i + 1, j + 1);
//			scanf("%d", &secondMatrix[i][j]);
//		}
//	}
//}
//
//void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
//{
//	int i, j, k;
//
//	// Initializing elements of matrix mult to 0.
//	for(i = 0; i < rowFirst; ++i)
//	{
//		for(j = 0; j < columnSecond; ++j)
//		{
//			mult[i][j] = 0;
//		}
//	}
//
//	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
//	for(i = 0; i < rowFirst; ++i)
//	{
//		for(j = 0; j < columnSecond; ++j)
//		{
//			for(k=0; k<columnFirst; ++k)
//			{
//				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
//			}
//		}
//	}
//}
//
//void display(int mult[][10], int rowFirst, int columnSecond)
//{
//	int i, j;
//	printf("\nOutput Matrix:\n");
//	for(i = 0; i < rowFirst; ++i)
//	{
//		for(j = 0; j < columnSecond; ++j)
//		{
//			printf("%d  ", mult[i][j]);
//			if(j == columnSecond - 1)
//				printf("\n\n");
//		}
//	}
//}
