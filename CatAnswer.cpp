////Q13:Programs for Questions 13 and 14 in editable way//
//
//#include <iostream>
//using namespace std;
//int findSecondSmallest(int arrayNum[], int n) {
//  int smallestNum, secondSmallestNum;
//  if (arrayNum[0] < arrayNum[1]) {
//    smallestNum = arrayNum[0];
//    secondSmallestNum = arrayNum[1];
//  } else {
//    smallestNum = arrayNum[1];
//    secondSmallestNum = arrayNum[0];
//  }
//for (int i = 0; i < n; i++) {
//if (smallestNum > arrayNum[i]) {
//secondSmallestNum = smallestNum;
//smallestNum = arrayNum[i];
//} else if (arrayNum[i] < secondSmallestNum && arrayNum[i] > smallestNum) {
//secondSmallestNum = arrayNum[i];
//}
//}
//  return secondSmallestNum;
//}
//int main() {
//  int n;
//  cout<<"Enter the number of elements: ";
//  cin>>n;
//  int arrayNum[n]={};
//  cout<<"\n Enter "<<n<<" elements of array:\n";
//  for(int i=0;i<n;i++){
//    cout<<"array_num["<<i<<"]:";
//    cin>>arrayNum[i];
//  }
//  int s = sizeof(arrayNum) / sizeof(arrayNum[0]);
//    cout << "Original array: ";
//    for (int i=0; i < s; i++)
//    cout << arrayNum[i] <<" ";
//  int secondSmallestNum = findSecondSmallest(arrayNum, n);
//  cout<<"\nSecond smallest number: "<<secondSmallestNum;
//  return 0;
//}
//

//Q14
#include<iostream>
using namespace std;
void mostFrequentNumber(int arrayNum[], int size)
{
  int maxCount  = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (arrayNum[i]==arrayNum[j])
           count++;
   if (count>maxCount )
      maxCount  = count;
  }
  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (arrayNum[i]==arrayNum[j])
           count++;
   if (count==maxCount )
       cout << arrayNum[i] << endl;
  }
}
int main()
{
    int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int arrayNum[n]={};
  cout<<"\n Enter "<<n<<" elements of array:\n";
  for(int i=0;i<n;i++){
    cout<<"array_num["<<i<<"]:";
    cin>>arrayNum[i];
  }
    int s = sizeof(arrayNum)/sizeof(arrayNum[0]);
    cout << "Original array: ";
    for (int i=0; i < s; i++)
    cout << arrayNum[i] <<" ";
    mostFrequentNumber(arrayNum, n);
}
