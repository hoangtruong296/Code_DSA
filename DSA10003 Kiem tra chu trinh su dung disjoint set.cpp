#include<bits/stdc++.h>
using namespace std;

int n, k, check[1005]={0}, parent[1005];
vector<set<int>> vi;
string res;
void dfs(int u){ 
	check[u]=1;
	if(vi[u].size()==0) return;
	for(auto x:vi[u]){
		if(!check[x]) parent[x]=u, dfs(x);
		else if(x!=parent[u]) res="YES"; //x da dc check va k phai parent cua u->lap lai->chutrinh
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		vi.clear();
		vi.resize(n+5);
		memset(check, 0, sizeof(check));
		res="NO"; 
		for(int i=1; i<=k; i++){
			int a, b; cin >> a >> b;
			vi[a].insert(b);
			vi[b].insert(a);
		}
		for(int i=1; i<=n; i++) parent[i]=i;
		for(int i=1; i<=n; i++){
			memset(check, 0, sizeof(check));
			if(!check[i]) dfs(i);
		} 
		cout << res << endl;
	}
}

