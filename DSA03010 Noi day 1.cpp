#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll res=0;
		priority_queue<ll, vector<ll>, greater<ll>> pq;
		for(int i=0; i<n; i++){
			ll a; cin >> a; 
			pq.push(a);
		}
		while(pq.size()>1){
			ll a, b;
			a=pq.top(); pq.pop();
			b=pq.top(); pq.pop();
			pq.push(a+b); // do dai day moi tao thanh tu 2 day nho nhat
			res+=a+b;
		}
		cout << res << endl;
	}
}
