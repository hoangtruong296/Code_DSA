#include<bits/stdc++.h>
using namespace std;
int a[100][100]={0}, n, d[100]={0}, e[100]={0}, vs[100]={0};
void DIJKSTRA(int s){
	vs[s]=1;
	for(int i=1; i<=n; i++) d[i]=a[s][i], e[i]=s;
	int u;
	while(1){
		u=0;
		int minn=10000;
		for(int i=1; i<=n; i++) if(vs[i]==0 && d[i]<minn) minn=d[i], u=i;
		if(u==0) return;
		vs[u]=1;
		for(int i=1; i<=n; i++){
			if(vs[i]==0 && d[i]>d[u]+a[u][i]) e[i]=u, d[i]=d[u]+a[u][i];
		}
	}
}
int main(){
	n=5;
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> a[i][j];
	dijkstra(1);
	for(int i=1; i<=n; i++) cout << e[i] << " "; cout << endl;
	for(int i=1; i<=n; i++){
		if(e[i]!=i){
			cout << "Chieu dai duong di tu 1 den " << i << " la " << d[i] << endl;
			int u=i;
			cout << "Quang duong tu 1 den " << i << " la ";
			while(e[u]!=u){
				cout << e[u] << " "; u=e[u];
			} 
			cout << endl;
		}
	}
}
/*
0 7 5 8 2
10000 0 10000 10000 10000
10000 1 0 1 10000 
10000 1 10000 0 10000
10000 10000 10000 1 0
*/
