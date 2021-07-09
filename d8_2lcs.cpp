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
	for(int i=0;i<n;i++){
		reverse(strs[i].begin(),strs[i].end());
	}
	int c=0;
	string lcs=strs[0];
	for(int i=0;i<n;i++){
		while(strs[i].find(lcs)!=0){
			lcs=lcs.substr(0,lcs.length()-1);
			if(lcs.empty()){
				c=1;
				break;
			}
		}
		if(c==1)
			break;
	}
	if(c==1)
		cout<<"";
	else{
		reverse(lcs.begin(),lcs.end());
		cout<<lcs;
	}
}
