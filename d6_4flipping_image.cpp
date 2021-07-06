#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of square matrix: ";
	cin>>n;
	int image[n][n];
	cout<<"image: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>image[i][j];
	}
	for(int i=0;i<n;i++){
		int s=0;
		int l=n-1;
		while(s<l){
			int temp=image[i][s];
			image[i][s]=image[i][l];
			image[i][l]=temp;
			s++;
			l--;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(image[i][j]^1)
				image[i][j]=1;
			else
				image[i][j]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<image[i][j]<<" ";
		cout<<endl;
	}
}
