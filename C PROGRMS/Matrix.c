//#include <stdio.h>
//#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {
//	char name[]="Byumvuhore Aible";
//	printf("%c \n",*name);
//	printf("%c \n",*(name+2));
//	printf("%c \n",*(name+7));
//	
//	char *nameptr;
//	nameptr=name;
//	printf("%c \n",*nameptr);
//	printf("%c \n",*(name+2));
//	printf("%c \n",*(name+7));
//	
//	
//	return 0;
//}

#include <stdio.h> 
int main()
{
//int var = 5;
//printf("Value: %d\n", var);
//printf("Address: %p\n", &var); //Notice, the ampersand(&) before var.
//return 0;

//int i =1;
//int *p = &i;
////q = p;
//printf("%d",*p);
int i=0;
printf("i before post (i++): %d \n",(i++)); //0
printf("i after ++i: %d \n",i);//1
printf("i before post (i++): %d \n",(++i)); //2
printf("i after ++i: %d \n",++i);//2
}

