#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int romanToInt(char ch){
	switch(ch){
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}
	return 0;
}
int main(){
	string str;
	cout<<"str: ";
	cin>>str;
	int n=str.length();
	int int_num=romanToInt(str[n-1]);
	for(int i=n-2;i>=0;i--){
		if(romanToInt(str[i])<romanToInt(str[i+1]))
			int_num=int_num-romanToInt(str[i]);
		else
			int_num=int_num+romanToInt(str[i]);
	}
	cout<<int_num;
}
