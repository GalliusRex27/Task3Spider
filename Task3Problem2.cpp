#include<bits/stdc++.h>
#include<stack>
#include<set>
#include<list>
using namespace std;
int main() {
stack<long long int> s;
list<long long int> g;
long long int g1;
long long int h=0;
long long int n,m;
cin>>n>>m;
vector<long long int> A;
for(int i=0;i<m;i++){
long long x;
cin>>x;
A.push_back(x);
}
sort(A.begin(),A.end());
reverse(A.begin(),A.end());
for (int i = 0; i < m; i++) {
if(i>=n){
if (s.empty()) {
s.push(A[i]);
}
else{
s.push(min(A[i],s.top()));
}}
else{
if (g.empty()) {
g.push_front(A[i]);
}
else{
g.push_front(min(A[i], g.front()));
}}}
for(int i=0;i<m-n;i++){
    if((i+1)/n%2==0&&(i+1)%n==0){
    	if(!g.empty()){
	int t=g.front();
	g.pop_front();
	g.push_back(min(A[i+n]+t, g.front()));
	g.sort();
	}
	}
	else{
	if(!g.empty()){
	int t=g.front();
	g.pop_front();
	g.push_back(max(A[i+n]+t, g.front()));
	}}
}
g.sort();
cout<<g.front();
return 0;
}
