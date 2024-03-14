#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

// Function to calculate the area of a square
int area(int side) {
    return square(side);
}

// Function to reverse a number
int reverse(int num) {
    int reversed_num = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }

    return reversed_num;
}

int main() {
    int num, side;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the side of a square: ");
    scanf("%d", &side);

    printf("Square of %d is %d\n", num, square(num));
    printf("Area of square with side %d is %d\n", side, area(side));
    printf("Reverse of %d is %d\n", num, reverse(num));

    return 0;
}
