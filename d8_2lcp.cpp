#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	string strs[n];
	cout<<"strs: ";
	for(int i=0;i<n;i++){
		cin>>strs[i];
	}
	int c=0;
	string lcp=strs[0];
	for(int i=0;i<n;i++){
		while(strs[i].find(lcp)!=0){
			lcp=lcp.substr(0,lcp.length()-1);
			if(lcp.empty()){
				c=1;
				break;
			}
		}
		if(c==1)
			break;
	}
	if(c==1)
		cout<<"";
	else
		cout<<lcp;
}
