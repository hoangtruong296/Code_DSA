#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){			// dung set de luu tru, map de danh dau nhung WA
		ll n, m, p; cin >> n >> m >> p;
		vector<ll> v1(n, 0), v2(m, 0), v3(p, 0), vl;
		for(int i=0; i<n; i++) cin >> v1[i];
		for(int i=0; i<m; i++) cin >> v2[i];
		for(int i=0; i<p; i++) cin >> v3[i];
		ll a=0, b=0;
		while(a<n && b<m){
			if(v1[a]==v2[b]){
				vl.push_back(v1[a]); a++; b++;
			} 
			if(v1[a]>v2[b]) b++;
			if(v1[a]<v2[b]) a++;
		}
		a=0; b=0; v1.erase(v1.begin(), v1.end());
		while(a<p && b<vl.size()){
			if(v3[a]==vl[b]){
				v1.push_back(vl[b]); a++; b++;
			} 
			if(v3[a]>vl[b]) b++;
			if(v3[a]<vl[b]) a++;
		}
		if(v1.size()==0) cout << -1;
		for(auto x:v1) cout << x << " ";
		cout << endl;
	}
}
