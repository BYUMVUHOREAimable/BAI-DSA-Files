//#include <iostream>
//#include <climits>
//
//int main() {
//    // Part a
//    int size;
//    std::cout << "Enter the size of the array: ";
//    std::cin >> size;
//
//    int scores[size];
//
//    std::cout << "Enter the elements of the array:\n";
//    for (int i = 0; i < size; ++i) {
//        std::cout << "Element " << i + 1 << ": ";
//        std::cin >> scores[i];
//    }
//
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += scores[i];
//    }
//
//    double average = static_cast<double>(sum) / size;
//
//    std::cout << "Sum: " << sum << "\n";
//    std::cout << "Average: " << average << "\n";
//
//    // Part b
//    int largest = INT_MIN;
//    int smallest = INT_MAX;
//
//    for (int i = 0; i < size; ++i) {
//        if (scores[i] > largest) {
//            largest = scores[i];
//        }
//        if (scores[i] < smallest) {
//            smallest = scores[i];
//        }
//    }
//
//    std::cout << "Largest element: " << largest << "\n";
//    std::cout << "Smallest element: " << smallest << "\n";
//
//    // Part c
//    std::cout << "Array elements in reverse:\n";
//    for (int i = size - 1; i >= 0; --i) {
//        std::cout << scores[i] << " ";
//    }
//    std::cout << "\n";
//
//    // Part d
//    int reversedArray[size];
//    for (int i = 0; i < size; ++i) {
//        reversedArray[i] = scores[size - 1 - i];
//    }
//
//    std::cout << "Reversed array:\n";
//    for (int i = 0; i < size; ++i) {
//        std::cout << reversedArray[i] << " ";
//    }
//    std::cout << "\n";
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//char String1[] = "Love your neighbour";
//char String2[80]= "Promote Peace";
//cout<< "String2 before copying: " << String2 << endl;//Promote Peace
//strcpy(String2,String1);
//cout<< "String1 is: " << String1 << endl;//Love your neighbour
//cout<< "String2 after copying: " << String2 <<endl;//Love your neighbour
//cout<< "String2 has: " <<strlen (String2)<<" characters\n";
//return 0;
//}
//

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    // a. Number of rows and columns
//    const int numSchools = 4;
//    const int numYears = 4;
//
//    // b. Generate a table (2D array)
//    int population[numSchools][numYears];
//
//    // c. Declare an array called population
//    // (already done in the line above)
//
//    // d. Initialize the array population with numbers of your choice
//    // For example:
//    population[0][0] = 100; // School A, Year 2015
//    population[0][1] = 120; // School A, Year 2016
//    population[0][2] = 110; // School A, Year 2017
//    population[0][3] = 105; // School A, Year 2018
//
//    population[1][0] = 90;  // School B, Year 2015
//    population[1][1] = 95;  // School B, Year 2016
//    population[1][2] = 100; // School B, Year 2017
//    population[1][3] = 98;  // School B, Year 2018
//
//    population[2][0] = 80;  // School C, Year 2015
//    population[2][1] = 85;  // School C, Year 2016
//    population[2][2] = 87;  // School C, Year 2017
//    population[2][3] = 88;  // School C, Year 2018
//
//    population[3][0] = 75;  // School D, Year 2015
//    population[3][1] = 78;  // School D, Year 2016
//    population[3][2] = 80;  // School D, Year 2017
//    population[3][3] = 82;  // School D, Year 2018
//
//    // Displaying the table
//    std::cout << "School\t2015\t2016\t2017\t2018\n";
//    for (int i = 0; i < numSchools; ++i) {
//        std::cout << "School " << static_cast<char>('A' + i) << " ";
//        for (int j = 0; j < numYears; ++j) {
//            std::cout << population[i][j] << "\t";
//        }
//        std::cout << "\n";
//    }
//
//    return 0;
//}

//#include <iostream>
//
//const int numRows = 2;
//const int numCols = 7;
//
//int main() {
//    int A[numRows][numCols] = {
//        {1, 2, 3, 13, 17, 34, 19},
//        {54, 23, 11, 45, 31, 65, 26}
//    };
//
//    // Optional: Display the initialized array
//    for (int i = 0; i < numRows; ++i) {
//        for (int j = 0; j < numCols; ++j) {
//            std::cout << "A[" << i << "][" << j << "] " << A[i][j] << "\n";
//        }
//    }
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//void display(int marks[][2], int r, int c)
//{
//for (int i=0; i<r;i++){
//for (int j=0;j<c;j++){
//  cout<<marks[i][j]<<" ";
//  }
//  cout<<endl;
//}
//}
//int main(){
//
//int A[][2]={
//{ 12,14},
//{15,18}
//};
//display(A,2,2);
//
//}


//#include<iostream>
//using namespace std;
//void display(int marks[2][], int r, int c)
//{
//for (int i=0; i<r;i++){
//for (int j=0;j<c;j++){
//  cout<<marks[i][j]<<" ";
//  }
//  cout<<endl;
//}
//}
//int main(){
//
//int A[][2]={
//{ 12,14},
//{15,18}
//};
//display(A,2,2);
//}

//#include<iostream>
//using namespace std;
//void display(int marks[][5], int r, int c)
//{
//for (int i=0; i<r;i++){
//for (int j=0;j<c;j++){
//  cout<<marks[i][j]<<" ";
//  }
//  cout<<endl;
//}
//}
//int main(){
//
//int A[][5]={
//{ 12,14},
//{15,18}
//};
//display(A,2,5);
//int B[5][5]={{0}};
//display(B,5,5}
////return 0;
//}

#include<iostream>
using namespace std;

int main(){
	int sum,i;
	int arr[5]={10,20,30,40,50};
	for(sum = *arr, i = 1; i < 5; i++)
		sum+= *(arr + i);
		cout<<"The sum is: "<<sum<<endl;
	return 0;
}


