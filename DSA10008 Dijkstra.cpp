#include<bits/stdc++.h>
using namespace std;
int n, k, be, check[1005]={0}, e[1005]={0};
vector<pair<int, int>> vi[1005];

void dijkstra(){
	e[be]=be;
	vector<int> d(n+2, 1e9);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	q.push({0, be}); d[be]=0; // trong so, dinh ke
	while(q.size()){
		pair<int, int> tmp=q.top(); q.pop();
		int u=tmp.second, len=tmp.first;
		if(check[u]) continue;
		check[u]=1;
		for(auto x:vi[u]){
			if(d[x.first]>d[u]+x.second) d[x.first]=d[u]+x.second, q.push({d[x.first], x.first});
		}
	}
	for(int i=1; i<=n; i++) cout << d[i] << " ";
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(e, 0, sizeof(e));
		cin >> n >> k >> be;
		for(int i=0; i<=1005; i++) vi[i].clear();
		memset(check, 0, sizeof(check));
		for(int i=1; i<=k; i++){
			int a, b, c; cin >> a >> b >> c;
			vi[a].push_back({b, c});
			vi[b].push_back({a, c});
		}
		dijkstra();
		cout << endl;
//		for(int i=1; i<=n; i++){
//			if(e[i]=i) continue;
//			else {
//				cout << i << ": ";
//				int u=i;
//				while(e[u]!=u) cout << u << " ", u=e[u];
//				cout << endl;
//			}
//		}
	}
}
