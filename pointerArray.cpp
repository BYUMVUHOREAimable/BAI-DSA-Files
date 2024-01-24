#include <iostream>
using namespace std;
int main(){
	int scores[5]={10,20,30,40,50};
	int *pScore;
	pScore=scores;
	
	for(int i=0;i<5;i++){
		cout<<"The elements of an array are: "<<scores[i]<<endl;
	}
	cout<<"The first element is: "<<*(pScore)<<endl;
	cout<<"The second element is: "<<*(pScore+1)<<endl;
	cout<<"The last element is: "<<*(pScore+4)<<endl;
	cout<<"The address element is: "<<pScore<<endl;
	cout<<"The address element is: "<<&scores[0]<<endl;
	
	return 0;
}