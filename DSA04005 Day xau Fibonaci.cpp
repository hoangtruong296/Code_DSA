#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fibo[100];
void f(){
	fibo[1]=1; fibo[2]=1;
	for(int i=3; i<=100; i++) fibo[i]=fibo[i-2]+fibo[i-1];
}
void solve(ll n, ll k){
	if(n==1 || n==2){
		if(n==1) cout << "A";
		else cout << "B";
		return;
	}
	if(k>fibo[n-2]){
		k-=fibo[n-2]; n--;
	} else n-=2;
	solve(n, k);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; 
		cin >> n >> k;
		f();
		solve(n, k);
		cout << endl;
	}
}
