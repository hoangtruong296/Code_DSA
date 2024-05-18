#include<bits/stdc++.h>
using namespace std;
int n, t, s=1, a[100][100], f[100][100], gf[100][100], e[100];
int bfs(){
	memset(e, -1, sizeof(e));
	queue<int> q;
	q.push(s);
	e[s]=0;
	while(q.size()){
		int u=q.front();
		q.pop();
		for(int i=1; i<=n; i++){
			if(e[i]==-1 && a[u][i]-gf[u][i]>0){
				q.push(i);
				e[i]=u;
				if(i==t) return 1;
			}
		}
	}
	return 0;
}

int max_flow(){
	int res=0;
	while(bfs()){
		cout << 0;
		int b=1e9;
		for(int i=t; i!=s; i=e[i]){
			int u=e[i];
			b=min(b, a[u][i]-gf[u][i]);
		}
		for(int i=t; i!=s; i=e[i]){
			int u=e[i];
			gf[u][i]+=b;
			gf[i][u]-=b;
			if(u<i) f[u][i]+=b;
			else f[i][u]-=b;
		}
		res+=b;
	}
	return res;
}
int main(){
	memset(f, 0, sizeof(f));
	memset(f, 0, sizeof(gf));
	ifstream in("DP.INP");
	ofstream out("DT.OUT");
//	ifstream in("DP.txt");
//	ofstream out("DT.txt");
	in >> n;
	t=n;
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) in >> a[i][j];
//	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) out << a[i][j];
	int val=max_flow();
	out << val << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) out << f[i][j] << " ";
		out << endl;
	}
}
