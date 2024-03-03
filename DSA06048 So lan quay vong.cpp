#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+1], res=0, a=0;
		for(int i=0; i<n; i++) cin >> ar[i];
		for(int i=0; i<n; i++) a=max(a, ar[i]);
		for(int i=0; i<n; i++) if(ar[i]==a) res=i;
		if(res==n-1) res=-1;
		cout << res+1 << endl;
	}
}
