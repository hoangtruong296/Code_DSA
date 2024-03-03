#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		ll ar[n+1], c=0;	// vi n<=10^5 nen de ll
		for(int i=0; i<n; i++) cin >> ar[i];	
		sort(ar, ar+n);
		map<int, ll> mp;
		for(int i=0; i<n; i++){
			mp[ar[i]]++; mc=max(mp[ar[i]], mc);
		} 
		for(int i=0; i<n; i++){
			if(ar[i]==ar[i-1] && i>0) continue;
			if(ar[i]*2==k) c+=(mp[ar[i]]*(mp[ar[i]]-1)/2);
			else{
				c+=(mp[k-ar[i]]*mp[ar[i]]);
				mp[k-ar[i]]=0;
			}
		}
		cout << c;
		cout << endl;
	}
}
