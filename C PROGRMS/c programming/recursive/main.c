#include <stdio.h>

int factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
        return 1;

    // Recursive case
    return n * factorial(n-1);
}

int main()
{
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of a negative number is not defined!");
    else
        printf("Factorial of %d is %d", num, factorial(num));

    return 0;
}
