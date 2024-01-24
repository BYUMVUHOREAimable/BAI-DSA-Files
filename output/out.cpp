//#include<iostream>
//
//using namespace std;
//
//int main(){
//	
//	int scores[5]={10,20,30,40,50};
//	for(int i=0;i<5;i++){
//		
//		cout<<*(scores+i)<<" "; //10,20,30,40,50
//	}
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int sum,i;
//    int a[5]={10,20,30,40,50};
//   for (sum = *a, i = 1; i < 5; i++)
//sum+= *(a + i);
//cout<<sum<<endl;
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int sum,i;
//    int a[5]={10,20,30,40,50};
//int *p;
//p=a;
//   for (sum = *a, p = a+1; p < a+5; p++)
//sum  += *p;
//cout<<sum<<endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void reverseArray(int scores[], int n) {
//    int start = 0;
//    int end = n - 1;
//    while (start < end) {
//        // Swap elements at start and end indices
//        int temp = scores[start];
//        scores[start] = scores[end];
//        scores[end] = temp;
//        // Move the indices inward
//        start++;
//        end--;
//    }
//}
//
//int main() {
//    int n;
//    std::cout << "Enter the number of elements in the array: ";
//    std::cin >> n;
//
//    int scores[n];
//    std::cout << "Enter the elements of the array:" << std::endl;
//    for (int i = 0; i < n; ++i) {
//        std::cin >> scores[i];
//    }
//
//    // Call the function to reverse the array
//    reverseArray(scores, n);
//
//    std::cout << "Reversed array:" << std::endl;
//    for (int i = 0; i < n; ++i) {
//        std::cout << scores[i] << " ";
//    }
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int* demo() //return type- address of integer array
//{
//	static int a[5]; //array declared as static
//	for(int i = 0; i<5; i++)
//	{
//		a[i] = i; //array initialisation
//	}
//
//	return a; //address of a returned
//}
//
//int main()
//{
//	int* ptr; //pointer to hold address
//	int i;
//	ptr = demo(); //address of a
//	cout<<"Array is: ";
//	for(i=0 ; i<5; i++)
//		cout<<ptr[i]<<"\t"; //ptr[i] is equivalent to *(ptr+i)
//		
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int reverseArray(int scores[], int n) {
//    int* reversedArray = new int[n];
//    for (int i = 0; i < n; ++i) {
//        reversedArray[i] = scores[n - 1 - i];
//    }
//    return reversedArray;
//}
//
//int main() {
//    int n;
//    std::cout << "Enter the number of elements in the array: ";
//    std::cin >> n;
//
//    int scores[n];
//    std::cout << "Enter the elements of the array:" << std::endl;
//    for (int i = 0; i < n; ++i) {
//        std::cin >> scores[i];
//    }
//
//    int* reversedScores = reverseArray(scores, n);
//
//    std::cout << "Reversed array:" << std::endl;
//    for (int i = 0; i < n; ++i) {
//        std::cout << reversedScores[i] << " ";
//    }
//
//    // Don't forget to delete the dynamically allocated array to avoid memory leaks
//    delete[] reversedScores;
//
//    return 0;
//}
//



#include <iostream>
#include <vector>
using namespace std;

std::vector<int> reverseArray(const std::vector<int>& arr) {
    std::vector<int> reversedArr;
    for (int i = arr.size() - 1; i >= 0; --i) {
        reversedArr.push_back(arr[i]);
    }
    return reversedArr;
}

int main() {
    std::vector<int> originalArray = {1, 2, 3, 4, 5};
    std::vector<int> reversedArray = reverseArray(originalArray);

    std::cout << "Original Array: ";
    for (const auto& num : originalArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Reversed Array: ";
    for (const auto& num : reversedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
