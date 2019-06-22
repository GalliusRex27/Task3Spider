#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll sum=0,ct=0;
	string str;
	getline(cin,str);
	while(str.size()>1){
		sum=0;
		for(int i=0;i<str.length();i++) 
        sum+=(str[i]-(int)'0');
		str=to_string(sum);
		ct++; 
	}
	cout<<ct;
	return 0;
}
