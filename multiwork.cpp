#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    // Dynamically allocate memory for the array
    int* scores = new int[size];
    
    // Input array elements
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> scores[i];
    }
    
    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += scores[i];
    }
    double average = static_cast<double>(sum) / size;
    
    // Find largest and smallest element
    int largest = *std::max_element(scores, scores + size);
    int smallest = *std::min_element(scores, scores + size);
    
    // Print array elements in reverse
    //cout << "Array elements in reverse (right to left): ";
    for (int i = size - 1; i >= 0; --i) {
        cout << scores[i] << " ";
    }
    cout << std::endl;
    
    // Generate reversed array
    int* reversedArray = new int[size];
    reverse_copy(scores, scores + size, reversedArray);
    
    // Output results
    cout << "Sum of array elements: " << sum <<endl;
    cout << "Average of array elements: " << average <<endl;
    cout << "Largest element in array: " << largest <<endl;
    cout << "Smallest element in array: " << smallest <<endl;
    std::cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << reversedArray[i] << " ";
    }
    
    // Deallocate memory
    delete[] scores;
    delete[] reversedArray;
    
    return 0;
}
