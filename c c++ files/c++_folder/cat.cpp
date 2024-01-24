//#include<iostream>
//using namespace std;
//void   bubbleSort(int num[], int n){
//int iteration,j,temp;
//for(iteration=1;iteration<n;iteration++){
//cout<<"Iteration="<<iteration<<endl;
//for (j=0;j<n-1;j++){
//if(num[j+1]<num[j]){
//temp=num[j];
//num[j]=num[j+1];
//num[j+1]=temp;
//}
//cout<<endl;
//cout<<"J="<<j<<endl;
//for(int k=0;k<n;k++){
//cout<<num[k]<<"\t";
//}
//cout<<endl;
//}
//}
//}
//int main(){
//int n=5;
//int arr[n]={15,52,11,38, 9};
//bubbleSort(arr,n);
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
   /// Base case
   if(n==0){
    return 0;
   }
   if(n==1){
    return 1;
   }
   // Recursive case
   int smallOutput1 = fib(n-1);
   int smallOutput2 = fib(n-2);
   /// calculation
   return smallOutput1 + smallOutput2;
}

int main(){
    cout<<fib(8);
    return 0;
}
