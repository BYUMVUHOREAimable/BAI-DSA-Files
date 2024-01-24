#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> myVector={10,20,30,40,50};
	
	
	for (int i=0;i<myVector.size();i++){
		cout<<myVector[i]<<" ";
	}
	
	cout<<" Foreach "<<endl;
	for(int i:myVector){
		cout<<i<<" ";
	}
	
	
	cout<<" Iterator "<<endl;
	for(auto i=myVector.begin();i!=myVector.end();++i){
		cout<<*i<<" ";
	}
	
	cout<<" Iterator2 "<<endl;
	
	vector<int>::iterator iter;
	for(iter=myVector.begin();iter!=myVector.end();++iter){
		cout<<*iter<<" ";
	}
	return 0;
}