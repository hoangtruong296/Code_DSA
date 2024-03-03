#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	ll fib[102];
	fib[1]=1; fib[2]=1;
	for(ll i=3; i<=100; i++) fib[i]=fib[i-2]+fib[i-1];
	while(t--){
		ll k, n; cin >> n >> k;
		while(n>2){
			if(k<=fib[n-2]){
				n-=2; 
			} else {
				k-=fib[n-2]; n--; // n-- de sau dkien k-=fib
			}
		}		
		if(n==1) cout << 0;
		else cout << 1;
		cout << endl;
	}
}
