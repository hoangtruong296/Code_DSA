#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=123456789;
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(n==1) cout << 1 << endl;
		else {
			n--;
			ll c=2, res=1;
			while(n>0){
				if(n%2) res=((res%mod)*(c%mod))%mod;
				c=(c*c)%mod;
				n/=2;
			}
			cout << res << endl;	
		}
		
	}
}
