#include<bits/stdc++.h>
using namespace std;
int a[100][100]={0}, n, wt=0, d[100]={0}, e[100]={0}, vs[100]={0};
void PRIM(int s){
	for(int i=1; i<=n; i++){
		vs[i]=0; d[i]=a[s][i]; e[i]=s;
	}
	vs[s]=1; d[s]=0; e[s]=0;
	int dem=1;
	while(dem<n){
		dem++;
		int u=0, minn=1e9;
		for(int i=1; i<=n; i++){
			if(vs[i]==0 && d[i]<minn) minn=d[i], u=i;
		}
		if(u==0){
			cout << "Khong co cay khung"; return;
		}
		vs[u]=1; 
		wt+=a[u][e[u]];
		for(int i=1; i<=n; i++){
			if(vs[i]==0 && d[i]>a[u][i]){
				d[i]=a[u][i]; e[i]=u;
			}
		}
	}
}
int main(){
	n=6;
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++){
		cin >> a[i][j];
		if(a[i][j]==-1 || (i!=j && a[i][j]==0)) a[i][j]=1e9;
	}
	PRIM(1);
	cout << wt << endl;
	for(int i=1; i<=n; i++) cout << i << " " << e[i] << endl;
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
