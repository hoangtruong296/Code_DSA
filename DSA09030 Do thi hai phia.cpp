#include<bits/stdc++.h>
using namespace std;

int color[1005]={0}, n, k;
vector<vector<int>> vi;
int bfs(int u){
	queue<int> q;
	q.push(u); color[u]=1; // chi co 2 mau la 1,2 vi cac dinh ke nhau k cung mau
	while(q.size()){
		int a=q.front(); q.pop(); 
		for(int j=0; j<vi[a].size(); j++){
			if(color[vi[a][j]]==0) color[vi[a][j]]=3-color[a], q.push(vi[a][j]); // gan mau 1 hoac 2 cho dinh xet
			else if(color[vi[a][j]]==color[a]) return 0;
		}
	}
	return 1;
}
string solve(){
	for(int i=1; i<=n; i++) if(color[i]==0) if(!bfs(i)) return "NO";
	return "YES";
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		vi.clear(); vi.resize(1005);
		memset(color, 0, sizeof(color));
		for(int i=1; i<=k; i++){
			int a, b; cin >> a >> b;
			vi[a].push_back(b); 
			vi[b].push_back(a);
		}
		cout << solve() << endl;	
	}
}
