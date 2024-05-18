#include<bits/stdc++.h>
using namespace std;
int a[100][100], e[100][100], n, d[100][100];
void FLOYD(){
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++){
		d[i][j]=a[i][j]; e[i][j]=i;
	}
	for(int k=1; k<=n; k++){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(d[i][j]>d[i][k]+d[k][j]){
					d[i][j]=d[i][k]+d[k][j]; e[i][j]=k;
				}
			}
		}
	}
}
int main(){
	n=5;
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> a[i][j];
	FLOYD();
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++){
		if(i!=j && d[i][j]!=1e4){
			cout << "Chieu dai duong di tu " << i << " den " << j << ": " << d[i][j] << endl;
			cout << "Duong di tu " << i << " den " << j << ": ";
			int u=i, v=j;
			cout << i << " ";
			while(1){
				if(e[u][v]==u) break;
				cout << e[u][v] << " ";
				u=e[u][v];
			}
			cout << j;
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
