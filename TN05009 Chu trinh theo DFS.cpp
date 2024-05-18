#include<bits/stdc++.h>
using namespace std;

int n, k, check[1005]={0}, ok=0;
vector<set<int>> vi;
string res;
void dfs(int u, int tmp, string s){ //tmp de chua dinh dc xet trc do
	if(ok) return; // vi ham co the van con chay tiep
	check[u]=1;
	if(vi[u].size()==0) return;
	for(auto x:vi[u]){
		if(!check[x]) dfs(x, u, s+" "+to_string(x));
		else if(x!=tmp && x==1){ //neu k co tmp se co the ra kq 1 2 1->k phai chu trinh
			res=s;
			ok=1; 
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		res.clear();
		vi.clear();
		vi.resize(n+5);
		memset(check, 0, sizeof(check));
		ok=0; 
		for(int i=1; i<=k; i++){
			int a, b; cin >> a >> b;
			vi[a].insert(b);
			vi[b].insert(a);
		}
		dfs(1, 0, "1");
		if(!ok) cout << "NO\n";
		else cout << res+" 1" << endl;
//		for(int i=1; i<=n; i++){
//			cout << i << ": ";
//			for(auto x:vi[i]) cout << x << " "; cout << endl;
//		}
	}
}

