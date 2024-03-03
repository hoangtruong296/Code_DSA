#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int ar[10000];
	for(int i=0; i<n; i++) cin >> ar[i];
	sort(ar, ar+n);
	int a=ar[n-1]*ar[n-2]*ar[n-3], b=ar[n-1]*ar[n-2], c=ar[0]*ar[1]*ar[n-1];
	int res=max(a, b);
	res=max(res, c);
	cout << res;
	cout << endl;	
}
