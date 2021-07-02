#include<iostream>
using namespace std;
int main(){
	int n,key;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	int nums[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>nums[i];
	cout<<"Enter the key: ";
	cin>>key;
	int i=0,j=n-1,count=0;
	while(i<n-count)
	{
		if(key==nums[i])
		{
			count++;
			nums[i]=nums[j];
			j--;
		}
		if(nums[i]!=key)
		{
			i++;
		}
	}
	cout<<n-count<<", nums = ";
	for(int i=0;i<n-count;i++)
	{
		cout<<nums[i];
	}
	cout<<endl;
}
