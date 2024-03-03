#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll p=1e9+7;
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ll ar[100005]={0};
		ar[0]=ar[1]=1;
		for(ll i=2; i<=n; i++){
			for(ll j=0; j<=min(i, k); j++){
				ar[i]+=ar[i-j]; ar[i]%=p;
			}
		}
		cout << ar[n] << endl;
	}
}
