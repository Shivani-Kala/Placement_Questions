#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	int nums[n];
	cout<<"Enter the array elements in non-decreasing order: ";
	for(int i=0;i<n;i++)
		cin>>nums[i];
	set<int> s;
	for(int i=0;i<n;i++)
	{
		s.insert(nums[i]);
	}
	int count=0;
	for(auto i=s.begin();i!=s.end();i++)
	    count++;
	cout<<count<<", ";
	for(auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
}
