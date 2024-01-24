//#include <iostream>
//using namespace std;
//int fun6 (int n) {
//int i = 1, m = 0; 
//while (i < n) {
//m += 1;
//i = i* 2;
//   }
//return m;
//}
//// Testing Code
//int main() {
//printf("N = 50, Number of instructions 0(log(n)) :: %d \n", fun6 (100));
//return 0;
//
//}

//#include <iostream>
//using namespace std;
//int fun6 (int n) {
//int  m = 0; 
//for(int i=0;i<n;i++){
//for(int j=0;j<n;j++){
//m += 1;
//   }
//   }
//return m;
//}
//// Testing Code
//int main() {
//printf("N = 5, Number of instructions 0(log(n)) :: %d \n", fun6 (10000000));
//return 0;
//
//}

    #include <iostream>
	using namespace std;
	 int sumArray(int a[]) {
	    int size = sizeof(a)/sizeof(int);
	    int sum = 0;
	    for (int iterator = 0; iterator < size; iterator++)            
              {
	        sum += a[iterator];
	        }
	    return sum;
	}
	int main() {
	    int arr[5]={10,20,30,40,50};
	    cout << "The sum is "<<sumArray(arr)<<endl;
	    cout<<"The size of array is:"<<sizeof(arr);
	    cout<<"The size of elements:"<<sizeof(arr)/sizeof(arr[0]);
	    return 0;
	}
