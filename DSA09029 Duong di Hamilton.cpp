#include<bits/stdc++.h>
using namespace std;
int n, k, check[1005]={0}, er[1005]={0}, res=0;
vector<vector<int>> vi;
void dfs(int u, int cnt){	// quay lui+dfs de xet het cac duong di
	//cout << u << " ";
	if(cnt==n){
		res=1; return;
	} 
	check[u]=1;
	for(auto x:vi[u]) if(check[x]==0){
		dfs(x, cnt+1);
	} 
	check[u]=0;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		res=0;
		vi.clear(); vi.resize(1005);
		memset(check, 0, sizeof(check));
		memset(er, 0, sizeof(er));
		for(int i=1; i<=k; i++){
			int a, b; cin >> a >> b;
			vi[a].push_back(b);
			vi[b].push_back(a);
		}
		
		for(int i=1; i<=n; i++){
			dfs(i, 1);
		}
		
		cout << res;
		cout << endl;
	}
}
