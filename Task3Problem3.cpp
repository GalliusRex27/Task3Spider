#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	long N;
	cin>>N;
	long r=1;
	bool  check[N];
	long sum=0;
	memset(check, true, sizeof(check)); 
	for(long i=2;i<=sqrt(N);i++){
		if(check[i]){
			for(long j=i*i;j<=N;j+=i){
				check[j]=false;
			}
		}
	}
	for(int i=2;i<N;i++){
		if(check[i]){
			sum+=r;
			r+=1;
		}
	}
	cout<<sum;
}
