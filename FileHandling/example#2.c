#include <stdio.h>
#include <stdlib.h>

int main() {
    int val;
    FILE *fptr;
    if ((fptr = fopen("G:\\Notes\\Term3\\C(FOP)\\File handling\\testingExample2.txt", "r")) == NULL) {
        printf("Visible error detected. Cannot open the file!");
        exit(1);
    }
    fscanf(fptr, "%d", &val);
    printf("The value of the integer n is = %d", val);
    fclose(fptr);
    return 0;
}
