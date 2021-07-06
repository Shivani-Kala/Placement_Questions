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
	int f=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j]){
				f=1;
				break;
			}
		}
		if(f==1)
			break;
	}
	if(f==0)
		cout<<"true";
	else
		cout<<"false";
}
