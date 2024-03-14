#include <stdio.h>
int main()
{
int * pc, c;

c = 22;
printf("Address of c: %p\n", &c);
printf("Value of c: %d\n\n", c);

pc = &c;
printf("Address of c: %p\n", pc);
 printf("Content pointed by pc: %d\n\n", *pc);

c = 11;
printf("Address of c: %p\n", pc);
 printf("Content pointed by pc: %d\n\n", *pc);

// a pointer can change the value of a variable
*pc = 2;
printf("Address of c: %p\n", &c);
printf("Value of c: %d\n\n", c);
return 0;
}
