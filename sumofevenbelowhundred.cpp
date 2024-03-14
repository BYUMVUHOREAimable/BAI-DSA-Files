//#include <iostream>
//using namespace std;
//
//int main() {
//    int sum = 0;
//
//    for (int i = 2; i < 100; i += 2) {
//        sum += i;
//    }
//
//    cout << "Sum of all even numbers less than 100: " << sum << std::endl;
//
//    return 0;
//}

#include <iostream>
bool isPythagoreanPair(int a, int b) {
    int c = a * a + b * b;
    for (int i = 2; i * i <= c; ++i) {
        if (c == i * i) {
            return true;
        }
 }
    return false;
}
void findPythagoreanPairs() {
    int count = 0;
    for (int a = 2; a < 100; ++a) {
        for (int b = a + 1; b < 100; ++b) {
            if (isPythagoreanPair(a, b)) {
                std::cout << "(" << a << ", " << b << ")\n";
                ++count;
            }
        }
    }
    std::cout << "Number of pairs found: " << count << std::endl;
}
int main() {
    findPythagoreanPairs();
    return 0;
}

