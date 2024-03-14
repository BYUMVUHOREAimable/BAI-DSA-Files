#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=20;
    int* ptr;
    ptr = &num;
    printf("The value of num: %d\n",num);
    printf("The value of address of num: %p\n",&num);
    printf("The value of address of ptr: %p\n",ptr);
    printf("The value pointed to by  ptr: %d\n",*ptr);
    return 0;
}
