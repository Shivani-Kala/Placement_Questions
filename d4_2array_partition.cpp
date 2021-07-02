#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of elements in array: ";
	cin>>n;
	int nums[n];
	cout<<"nums: ";
	for(int i=0;i<n;i++)
		cin>>nums[i];
	sort(nums,nums+n);
	int max=0;
	for(int i=0;i<n;i=i+2){
		max=max+nums[i];
	}
	cout<<max;
}
