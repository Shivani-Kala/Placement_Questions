#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of elements in array: ";
	cin>>n;
	int heights[n],expected[n];
	cout<<"nums: ";
	for(int i=0;i<n;i++)
		cin>>heights[i];
	for(int i=0;i<n;i++)
		expected[i]=heights[i];
	sort(expected,expected+n);
	int count=0;
	for(int i=0;i<n;i++){
		if(heights[i]!=expected[i])
			count++;
	}
	cout<<count;
}
