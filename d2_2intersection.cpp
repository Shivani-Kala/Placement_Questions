#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2;
	cout<<"Enter the no. of elements in nums1 array: ";
	cin>>n1;
	int nums1[n1];
	cout<<"nums1: ";
	for(int i=0;i<n1;i++)
		cin>>nums1[i];
	cout<<"Enter the no. of elements in nums2 array: ";
	cin>>n2;
	int nums2[n2];
	cout<<"nums2: ";
	for(int i=0;i<n2;i++)
		cin>>nums2[i];
	set<int> s;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
		    if(nums1[i]==nums2[j])
		        s.insert(nums1[i]);
		}
	}
	for(auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
}
