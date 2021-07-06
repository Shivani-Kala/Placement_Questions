#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the size of matrix: ";
	cin>>m>>n;
	int china[m][n];
	cout<<"Enter the elements: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>china[i][j];
	}
	int c1,c2;
	cout<<"Enter the position of infected person: ";
	cin>>c1>>c2;
	china[c1][c2]=2;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(china[i][j]==1){
				if(j>0 && (china[i][j-1]==1 || china[i][j-1]==2))
					china[i][j]=2;
				if(j<n-1 && (china[i][j+1]==1 || china[i][j+1]==2))
					china[i][j]=2;
				if(i>0 && (china[i-1][j]==1 || china[i-1][j]==2))
					china[i][j]=2;
				if(i<m-1 && (china[i+1][j]==1 || china[i+1][j]==2))
					china[i][j]=2;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<china[i][j]<<" ";
		cout<<endl;
	}
}
