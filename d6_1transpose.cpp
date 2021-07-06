#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the size of 2d matrix: ";
	cin>>m>>n;
	int matrix[m][n],matrixT[n][m];
	cout<<"matrix: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>matrix[i][j];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			matrixT[j][i]=matrix[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<matrixT[i][j]<<" ";
		cout<<endl;
	}
}
