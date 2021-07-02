#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,s2;
	cout<<"Enter the string: ";
	cin>>s;
	int n=s.length();
	int indices[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>indices[i];
	for(int i=0;i<n;i++){
		int j=indices[i];
		s2[j]=s[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<s2[i];
	}
	cout<<endl;
}
