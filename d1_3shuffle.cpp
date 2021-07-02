#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	int nums[n],nums2[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>nums[i];
	int i=0,mid=n/2;
	for(int j=0;j<n;j++)
	{
		if(j%2==0){
			nums2[j]=nums[i];
			i++;
		}
		else{
			nums2[j]=nums[mid];
			mid++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<nums2[i];
	}
	cout<<endl;
}
