#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of square matrix: ";
	cin>>n;
	vector<vector<int> > mat;
	vector<vector<int> > target;
	int a;
	cout<<"mat: ";
	for(int i=0;i<n;i++){
		vector<int> b;
		for(int j=0;j<n;j++){
			cin>>a;
			b.push_back(a);
		}
		mat.push_back(b);
	}
	cout<<"target: ";
	for(int i=0;i<n;i++){
		vector<int> b;
		for(int j=0;j<n;j++){
			cin>>a;
			b.push_back(a);
		}
		target.push_back(b);
	}
	int k=4,c=0;
	if(mat==target){
		c++;
	}
	else{
		while(k--){
			for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
					swap(mat[i][j],mat[j][i]);
				}
			}
			for(int i=0;i<n;i++){
				reverse(mat[i].begin(),mat[i].end());
			}
		
			if(mat==target){
				c++;
				break;
			}
		}
	}
	if(c==0)
		cout<<"false";
	else
		cout<<"true";	
}
