#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+1], a=1e9, b=1e9;
		for(int i=0; i<n; i++) cin >> ar[i];
		for(int i=0; i<n; i++) a=min(a, ar[i]);
		for(int i=0; i<n; i++) if(ar[i]!=a) b=min(b, ar[i]);
		if(b==1e9) cout << -1;
		else cout << a << " " << b;
		cout << endl;
	}
}
