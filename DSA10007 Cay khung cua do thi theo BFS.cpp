#include<bits/stdc++.h>
using namespace std;
int n, k, be, check[1005]={0};
vector<pair<int,int>> res;
vector<vector<int>> vi;
void bfs(int u){
	check[u]=1;
	queue<int> q;
	q.push(u);
	while(q.size()){
		int a=q.front(); q.pop();
		for(auto x:vi[a]){
			if(!check[x]) res.push_back({a, x}), q.push(x), check[x]=1;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k >> be;
		res.clear(); 
		vi.clear();
		vi.resize(n+5);
		memset(check, 0, sizeof(check));
		for(int i=1; i<=k; i++){
			int a, b; cin >> a >> b;
			vi[a].push_back(b);
			vi[b].push_back(a);
		}	
		bfs(be);
		if(res.size()==n-1){
			for(int i=0; i<res.size(); i++){
				cout << res[i].first << " " << res[i].second << "\n";
			}
		} else cout << -1 << endl;
		
	}
}
