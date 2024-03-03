#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cal(int ar[], int n, int k){
	int s=0, ss=0;
	for(int i=0; i<k; i++) s+=ar[i];
	for(int i=k; i<n; i++) ss+=ar[i];
	return abs(ss-s);
}
int cmp(int a, int b){
	if(a>b) return 1;
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int ar[n+1];
		for(ll i=0; i<n; i++) cin >> ar[i];
		sort(ar, ar+n);
		int res=0;
		res=max(cal(ar, n, k), res);
		sort(ar, ar+n, cmp);
		res=max(cal(ar, n, k), res);
		cout << res << endl;
	}
}
