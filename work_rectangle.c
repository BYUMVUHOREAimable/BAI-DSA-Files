#include <stdio.h>
#include <stdlib.h>

// Function to receive addresses of rectangle sides and return their addresses as an array of pointers
float** getRectangleSides() {
    // Create a dynamic array to hold the addresses
    float** sides = (float**)malloc(2 * sizeof(float*));

    // Check if the allocation was successful
    if (sides != NULL) {
        // Prompt the user to enter the length and width of the rectangle
        float* length = (float*)malloc(sizeof(float));
        float* width = (float*)malloc(sizeof(float));

        if (length != NULL && width != NULL) {
            printf("Enter the length of the rectangle: ");
            scanf("%f", length);

            printf("Enter the width of the rectangle: ");
            scanf("%f", width);

            // Assign the addresses to the array
            sides[0] = length;
            sides[1] = width;
        } else {
            // Memory allocation failed, free previously allocated memory
            free(length);
            free(width);
            free(sides);
            sides = NULL;
        }
    }

    return sides;
}

// Function to calculate the area of a rectangle
float calculateRectangleArea(const float* lengthPtr, const float* widthPtr) {
    // Check if pointers are valid
    if (lengthPtr && widthPtr) {
        // Calculate the area
        return (*lengthPtr) * (*widthPtr);
    }
    return 0.0;  // Invalid pointers, return 0 as area
}

int main() {
    float area;
    float** sides;

    // Call the function to receive the addresses of rectangle sides
    sides = getRectangleSides();

    // Check if the sides array is valid
    if (sides != NULL) {
        // Calculate the area of the rectangle using the received addresses
        area = calculateRectangleArea(sides[0], sides[1]);

        // Print the calculated area
        printf("The area of the rectangle is: %.2f\n", area);

        // Free the dynamically allocated memory
        free(sides[0]);
        free(sides[1]);
        free(sides);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}