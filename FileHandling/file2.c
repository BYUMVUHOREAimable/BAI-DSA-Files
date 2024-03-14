#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    if (fptr != NULL){
    printf("The file opened successfully");
        }
        else{
    printf("The file opened unsuccessfully");
        }
    return 0;
}