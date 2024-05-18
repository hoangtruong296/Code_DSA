#include<bits/stdc++.h>
using namespace std;
int n, c=0;
int ar[100][100]={0}, vs[100]={0}, e[100]={0};
vector<pair<int, int>> canh;
void dfs(int u){
//	cout << u << " ";
	vs[u]=1;
	for(int v=1; v<=n; v++){
		if(vs[v]==0 && ar[u][v]==1) canh.push_back({u, v}), dfs(v);
	}
}
int TPLT_DFS(){
	int tplt=0;
	for(int i=1; i<=n; i++) if(vs[i]==0) tplt++, dfs(i);	
	return tplt;
}
void T_DFS(int ar[100][100]){
	canh.clear();
	dfs(1);
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
/*	int t=10;			 // khi cho ds ke
	for(int i=1; i<=t; i++){
		string s, a; getline(cin, s);
		stringstream ss(s);
		while(ss >> a){
			ar[i][stoi(a)]=1; ar[stoi(a)][i]=1;
		}
	} 
0 1 1 0 0 0 
1 0 0 1 1 0
1 0 0 1 0 0
0 1 1 0 1 1 
0 1 0 1 0 1
0 0 0 1 1 0
*/
	n=6;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> ar[i][j];
		}	
	}
	//dfs(1);	
	T_DFS(ar);
}
