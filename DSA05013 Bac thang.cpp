#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p=1e9+7;

int main(){
	int t; cin >> t; 
	while(t--){		
		int n, k; cin >> n >> k; 
		ll ar[n+5];
		memset(ar, 0, sizeof(ar));
		ar[0]=ar[1]=1;
		for(int i=2; i<=n; i++){
			for(int j=1; j<=min(k, i); j++){ // xem vid ytb de hieu
				ar[i]=(ar[i]+ar[i-j])%p;
			}
		}
		cout << ar[n] << endl;
	}
}
