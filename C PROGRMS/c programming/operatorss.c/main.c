#include<stdio.h>
long factorial(int n){
if(n==0||n==1)
return 1;
else
return n*factorial(n-1);
}
int main(){
int number;
printf("\n Enter a Positive number:");
scanf("%d", &number);
printf("\nThe Factorial of %d is %ld \n",number, factorial(number));/* factorial function is called here*/
return 0;
}
