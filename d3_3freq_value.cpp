#include<iostream>
using namespace std;
int main(){
	int n,key;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	int nums[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>nums[i];
	for(int i=0;i<n/2;i++){
		int freq=nums[2*i];
		int value=nums[2*i+1];
		for(int j=1;j<=freq;j++){
			cout<<value<<" ";
		}
	}
}
