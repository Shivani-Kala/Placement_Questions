#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the size of the matrix: ";
	cin>>m>>n;
	vector<vector<int> > mat;
	int a;
	cout<<"mat:"<<endl;
	for(int i=0;i<m;i++){
		vector<int> b;
		for(int j=0;j<n;j++){
			cin>>a;
			b.push_back(a);
		}
		mat.push_back(b);
	}
	int k;
	cout<<"k = ";
	cin>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0 && mat[j][i]==0){
				cout<<j<<" ";
				k--;
			}
			else if(mat[j][i]==0 && mat[j][i-1]==1){
				cout<<j<<" ";
				k--;
			}
			if(k==0)
				break;
		}
		if(k==0)
			break;
	}
}
