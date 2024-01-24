//#include <iostream>
//
//int calculateDifference(int n) {
//    int sumOfSquares = 0;
//    int sum = 0;
//
//    for (int i = 1; i <= n; ++i) {
//        sumOfSquares += i * i;
//        sum += i;
//    }
//
//    int squareOfSum = sum * sum;
//    int difference = squareOfSum - sumOfSquares;
//    return difference;
//}
//
//int main() {
//    int n;
//    std::cout << "Enter a positive integer N: ";
//    std::cin >> n;
//
//    int result = calculateDifference(n);
//    std::cout << "The difference btn the square of the sum and the sum of the squares of the first " << n << " natural numbers is: " << result << std::endl;
//
//    return 0;
//}


#include <iostream>

int calculateDifference(int n) {
    int sumOdd = 0;
    int sumEven = 0;

    // Calculate sum of odd and even numbers below n
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            // i is even
            sumEven += i;
        } else {
            // i is odd
            sumOdd += i;
        }
    }

    int difference = sumOdd - sumEven;
    return difference;
}

int main() {
    int n;
    std::cout << "Enter a positive integer N: ";
    std::cin >> n;

    int result = calculateDifference(n);
    std::cout << "The difference between the sum of odd numbers and the sum of even numbers below " << n << " is: " << result << std::endl;

    return 0;
}
