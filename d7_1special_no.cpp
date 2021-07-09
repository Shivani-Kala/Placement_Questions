#include<iostream>
#include<bits/stdc++.h>
#define INT_MIN -1;
#define INT_MAX 100;
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the size of the 2d matrix: ";
	cin>>m>>n;
	vector<vector<int> > mat;
	int a;
	cout<<"mat: ";
	for(int i=0;i<m;i++){
		vector<int> b;
		for(int j=0;j<n;j++){
			cin>>a;
			b.push_back(a);
		}
		mat.push_back(b);
	}
	
	int max=INT_MIN;
	for(int i=0;i<m;i++){
		int min=INT_MAX;
		for(int j=0;j<n;j++){
			if(min>mat[i][j]){
				min=mat[i][j];
			}
		}
		if(max<min){
			max=min;
		}
	}
	cout<<max;
}
