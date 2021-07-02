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
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(nums[i]>nums[j] && i!=j)
				count++;
		}
		cout<<count<<" ";
	}
}
