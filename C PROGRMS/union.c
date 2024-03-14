//#include <stdio.h>
//
//union item
//{
//int a; //4bytes
//char ch;//1Byte
//};
//int main( )
//{
//union item it; 
//it.a = 12;
//printf("a: %d \n", it.a);//12  
//it.ch = 'z';
//printf("c: %c\n", it.ch);//z
//// Checking for corruption in memory
// printf("a: %d\n", it.a);//unexpected result it store one value at a time
//printf("c: %c\n", it.ch);//z
//return 0;
//}

//#include <stdio.h>
//
//union myUnion {
//  int intValue;
//  float floatValue;
//  char charValue;
//};
//
//int main() {
//  union myUnion myVar;
//  
//  myVar.intValue = 42;
//  printf("myVar.intValue: %d\n", myVar.intValue);
//
//  myVar.floatValue = 3.14;
//  printf("myVar.floatValue: %f\n", myVar.floatValue);
//
//  myVar.charValue = 'A';
//  printf("myVar.charValue: %c\n", myVar.charValue);
//  
//  printf("myVar.intValue: %d\n", myVar.intValue);
//  printf("myVar.floatValue: %f\n", myVar.floatValue);
//  printf("myVar.charValue: %c\n", myVar.charValue);
//
//  return 0;
//}

//#include<stdio.h>
////to customise the output will be ASCII code of characters
//enum week{Mon='a', Tue, Wed, Thur, Fri='m', Sat='a', Sun};
//enum day{Mond, Tues, Wedn, Thurs, Frid=18, Satu=11, Sund}; 
//int main() {
//printf("The value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",Mon , Tue, Wed, Thur, Fri, Sat, Sun);
//
//printf("The default value of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d \n",Mond , Tues, Wedn, Thurs, Frid, Satu, Sund);
//
////int a;
////int b;
////printf("Enter 2 numbers: ");
////scanf("%d%d",&a,&b);
////float f=(float)a/b;
////printf("The value of %f: %.2f",f);
//return 0;
//}

// Dynamic memory allocation of structs
#include <stdio.h>
#include <stdlib.h>
struct person {
   int age;
   float weight;
   char name[30];
};

int main()
{
   struct person *ptr;
   int i, n;

   printf("Enter the number of persons: ");
   scanf("%d", &n);

   // allocating memory for n numbers of struct person
   ptr = (struct person*) malloc(n * sizeof(struct person));

   for(i = 0; i < n; ++i)
   {
       printf("Enter first name and age respectively: ");
       scanf("%s %d", &(ptr+i)->name, &(ptr+i)->age);

       // To access members of 1st struct person,
       // ptr->name and ptr->age is used

       // To access members of 2nd struct person,
       // (ptr+1)->name and (ptr+1)->age is used
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }

   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

   return 0;
}


