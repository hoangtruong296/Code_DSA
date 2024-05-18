#include<bits/stdc++.h>
using namespace std;
int n, m, par[100], sz[100];
struct edge{
	int u, v, w;
};
vector<edge> E;
int cmp(edge a, edge b){
	return a.w<b.w;
}
int find(int u){
	if(par[u]==u) return u;
	return par[u]=find(par[u]);
}
int Union(int a, int b){
	a=find(a); b=find(b);
	if(a==b) return 0; // neu a==b tuc no co cung 1 par, neu noi voi nhau se tao thanh 1 chu trinh
	if(sz[a]<sz[b]){
		swap(a, b);
	}
	par[b]=a;
	sz[a]+=sz[b];
	return 1;
}
void KRUSKAL(){
	sort(E.begin(), E.end(), cmp);
	for(int i=1; i<=n; i++){
		par[i]=i; sz[i]=1;
	}
	int d=0;
	vector<edge> T;
	for(int i=0; i<m; i++){
		if(T.size()==n-1) break;
		edge tmp=E[i];
		if(Union(tmp.u, tmp.v)==1){
			T.push_back(tmp);
			d+=tmp.w;
		}
	}
	if(T.size()!=n-1) cout << "Do thi khong lien thong";
	else {
		cout << "Do dai cua cay khung cuc tieu la: " << d;
	}
}
int main(){
	cin >> n >> m;
	for(int i=1; i<=m; i++){
		int a, b, c; cin >> a >> b >> c;
		E.push_back({a, b, c});
	}
	KRUSKAL();
}
/*
0 2 1 0 0 0 
2 0 0 3 5 0
1 0 0 4 0 0
0 3 4 0 2 1 
0 5 0 2 0 3
0 0 0 1 3 0
da ktra bang cach tinh thu cong-wt=9, e1=0, e2=1,e3=1,e4=2,e5=e6=4
*/
