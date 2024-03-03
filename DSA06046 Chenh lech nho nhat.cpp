#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+1], res=1e9+1;
		for(int i=0; i<n; i++) cin >> ar[i];
		sort(ar, ar+n);
		for(int i=0; i<n-1; i++) res=min(res, ar[i+1]-ar[i]);
		cout << res << endl;
	}
}
