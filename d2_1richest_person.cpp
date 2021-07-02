#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the no of customers and banks: ";
	cin>>m;
	cin>>n;	
	int v[m][n];
	cout<<"Enter the matrix elements: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	int max=v[0][0];
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum=sum+v[i][j];
		}
		if(sum>max){
			max=sum;
		}
	}
	cout<<max<<endl; 
}
