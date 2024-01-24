#include <stdio.h>

// Function to calculate the area of a rectangle and return the addresses
void calculateRectangleArea(const float* lengthPtr, const float* widthPtr, float* areaPtr, const float** dimensionsPtr) {
    // Check if pointers are valid
    if (lengthPtr && widthPtr && areaPtr && dimensionsPtr) {
        // Calculate the area
        *areaPtr = (*lengthPtr) * (*widthPtr);

        // Set the addresses in the dimensions array
        dimensionsPtr[0] = lengthPtr;
        dimensionsPtr[1] = widthPtr;
    }
}

int main() {
    float length, width, area;
    const float* dimensions[2];

    // Get the user input for length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Call the function and pass the addresses of length, width, area, and dimensions array
    calculateRectangleArea(&length, &width, &area, dimensions);


    // Print the addresses of width and height and area
    printf("Address of width: %p\n", dimensions[0]);
    printf("Address of height: %p\n", dimensions[1]);
    printf("Address of the area: %p\n", &area);
    
    // Print the calculated area
    printf("The area of the rectangle is: %.2f\n", area);


    return 0;
}
