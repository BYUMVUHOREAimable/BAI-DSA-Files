#include <stdio.h>
#include <stdlib.h>

int* area(int* length, int* width) {
    int* array = malloc(2 * sizeof(int)); 
    array[0] = *length; 
    array[1] = *width;
    return array;
}
int main() {
    int length, width;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    int* result = area(&length, &width);
    printf("The address for the length is %p:\n",&length);
    printf("The address for the width is %p:\n",&width);
    printf("The area is %d\n", result[0] * result[1]);

free(result); 
    return 0;
}





