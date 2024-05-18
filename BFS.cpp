#include<bits/stdc++.h>
using namespace std;
int n, c=0;
int ar[100][100]={0}, vs[100]={0}; 
vector<pair<int, int>> canh;
void bfs(int u){
	queue<int> q; 
	q.push(u);
	vs[u]=1;
	while(q.size()){
		u=q.front(); q.pop();
//		cout << u << " ";
		for(int i=1; i<=n; i++){
			if(vs[i]==0 && ar[u][i]==1){
				canh.push_back({u, i});
				q.push(i); vs[i]=1;
			} 
		}
		
	}
}
int TPLT_BFS(){
	int tplt=0;
	for(int i=1; i<=n; i++) if(vs[i]==0) tplt++, bfs(i);	
	return tplt;
}
void T_BFS(int ar[100][100]){
	canh.clear();
	bfs(1);
	int dem=0;
	for(int i=1; i<=n; i++) if(vs[i]) dem++;
	if(dem==n){
		for(auto x:canh){
			if(x.first<x.second) cout << x.first << " " << x.second << endl;
			else cout << x.second << " " << x.first << endl;
		} 
	} else cout << "Khong co cay khung\n";
}
int main(){
	//cin >> n;
	n=6;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> ar[i][j];
		}	
	}
	T_BFS(ar);
}
