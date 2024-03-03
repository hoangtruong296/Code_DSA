#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ll ar[n+1], c=0;			// phai de long long trong khi de cho a[i]<1e9
		for(ll i=0; i<n; i++) cin >> ar[i];	
		sort(ar, ar+n);
		for(ll i=0; i<n-2; i++){
			for(ll j=i+1; j<n-1; j++){
				ll temp=ar[i]+ar[j];
				ll pos=upper_bound(ar+j+1, ar+n, k-temp-1)-ar;
				c+=(pos-j-1);
			}
		}
		cout << c;
		cout << endl;
	}
}
