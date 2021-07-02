#include<iostream>
using namespace std;
int main(){
	int n,key;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	int  nums[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>nums[i];
	int good=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(nums[i]==nums[j] &&i<j)
				good++;
		}
	}
	cout<<good<<endl;
}
