#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the size of 2d grid: ";
	cin>>m>>n;
	int grid[m][n];
	cout<<"Enter the elements: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>grid[i][j];
	}
	int k;
	cout<<"Enter the k rotations: ";
	cin>>k;
	int n1=m*n;
	int grid2[n1];
	
	while(k--){
		int a=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				grid2[a]=grid[i][j];
				a++;
			}
		}
		a=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(i==0 && j==0)
					grid[i][j]=grid2[n1-1];
				else{
					grid[i][j]=grid2[a];
					a++;
				}	
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<grid[i][j]<<" ";
		cout<<" ";
	}
}
