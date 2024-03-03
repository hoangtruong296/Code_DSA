#include<bits/stdc++.h>
using namespace std;

int main(){		
	int t; cin >> t;
	while(t--){
		int n, c=0; cin >> n;
		int ar[n+5], br[n+5], a=0, b=n-1;
		for(int i=0; i<n; i++) cin >> ar[i];
		for(int i=0; i<n; i++) br[i]= ar[i];
		sort(br, br+n);
		while(ar[a]==br[a]) a++;
		while(br[b]==ar[b]) b--;
		if(a==n-1 && b==0) continue;
		else cout << a+1 << " " << b+1 << endl;
	}
}
