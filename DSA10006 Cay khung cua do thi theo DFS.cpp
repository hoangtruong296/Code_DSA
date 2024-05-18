#include<bits/stdc++.h>
using namespace std;
int n, k, be, check[1005]={0};
vector<pair<int,int>> res;
vector<vector<int>> vi;
void dfs(int u){
	check[u]=1;
	for(auto x:vi[u]){
		if(!check[x]) res.push_back({u, x}), dfs(x); // luu canh hay luu dinh deu dung
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
		dfs(be);
		if(res.size()==n-1){
			for(int i=0; i<res.size(); i++){
				cout << res[i].first << " " << res[i].second << "\n";
			}
		} else cout << -1 << endl;
		
	}
}
