#include<iostream>
using namespace std;
int main(){
	int n,key;
	cout<<"Enter the no. of kids: ";
	cin>>n;
	int candies[n];
	cout<<"Enter the candies they have: ";
	for(int i=0;i<n;i++)
		cin>>candies[i];
	int extraCandies;
	cout<<"Extra Candies: ";
	cin>>extraCandies;
	int max=candies[0];
	for(int i=0;i<n;i++){
		if(max<candies[i]){
			max=candies[i];
		}
	}
	for(int i=0;i<n;i++){
		int j=candies[i]+extraCandies;
		if(j>=max)
			cout<<"true ";
		else
			cout<<"false ";
	}
}
