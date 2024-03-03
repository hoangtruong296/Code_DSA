#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll ar[n+1];
		ll sum=0, p=1e9+7;
		for(ll i=0; i<n; i++) cin >> ar[i];
		sort(ar, ar+n);
		for(ll i=0; i<n; i++) sum=(sum%p+(ar[i]%p*(i%p))%p)%p;
		cout << sum << endl;
	}
}
