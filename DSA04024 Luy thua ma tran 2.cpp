#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[10][10], br[10][10], p=1e9+7, flag;  // dung luy thua nhi phan de nhan ma tran
void cal(ll n){
	ll cr[10][10];
	for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) cr[i][j]=ar[i][j];
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			ll sum=0;
			for(ll k=0; k<n; k++){
				sum=sum%p+(cr[i][k]*cr[k][j])%p; 
			}
			ar[i][j]=sum%p;
		}
	} 
/*	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++) cout << ar[i][j] << " ";
		cout << endl;
	} */
}
void cal2(ll n){
	ll cr[10][10];
	for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) cr[i][j]=br[i][j];
	if(flag){
		for(ll i=0; i<n; i++){
			for(ll j=0; j<n; j++){
				ll sum=0;
				for(ll k=0; k<n; k++){
					sum=sum%p+(cr[i][k]%p*ar[k][j]%p)%p; //
				}
				br[i][j]=sum%p;
			}
		} 	
	} else{
		flag=1;
		for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) br[i][j]=ar[i][j];
	} 
/*	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++) cout << br[i][j] << " ";
		cout << endl;
	} */
}
int main(){
	int t; cin >> t;
	while(t--){
		ll m, n; cin >> n >> m;
		ll sum=0;
		flag=0;
		for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) cin >> ar[i][j];
		for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) br[i][j]=1;
		while(m>0){
			if(m%2) cal2(n);
			cal(n); m/=2;
		}
		for(ll i=0; i<n; i++) sum=(sum%p+br[i][n-1]%p)%p;
		cout << sum;
		cout << endl;
	}
}
