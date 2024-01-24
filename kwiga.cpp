#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	int sum = num1+num2;
	char operat;
	
	printf("Enter the operator: ",&operat);
	scanf("%c",&operat);
	
	printf("Enter the value of num1: ",&num1);
	scanf("%d",&num1);
	
	printf("Enter the value of num2: ",&num2);
	scanf("%d",&num2);
	
	if(operat == '+'){
		printf("The sum is: %d ",sum);
		
	}
	
	
	return 0;
}