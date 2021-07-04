#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int first;
	cout<<"Enter the first element: ";
	cin>>first;
	vector<int> encoded;
	int xr;
	encoded.push_back(first);
	for(int i=0;i<n;i++){
		xr=arr[i]^encoded[i];
		encoded.push_back(xr);
	}
	int n1=encoded.size();
	for(int i=0;i<n1;i++)
		cout<<encoded[i]<<" ";
}
