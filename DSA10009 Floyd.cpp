#include<bits/stdc++.h>
using namespace std;
int n, k, quest;
int ar[105][105]={0}, e[105][105]={0};
void floyd(){
	int d[105][105]={0};
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) d[i][j]=ar[i][j], e[i][j]=i;
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n; j++) cout << d[i][j] << " "; cout << endl;
//	} 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			for(int l=1; l<=n; l++){
				if(d[j][l]>d[j][i]+d[i][l]){
					d[j][l]=d[j][i]+d[i][l]; e[j][l]=i;
				}
			}	
		}	
	}
	cin >> quest;
	while(quest--){
		int a, b; cin >> a >> b;
		cout << d[a][b] << endl;
	}
}
int main(){
	cin >> n >> k;
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) if(i!=j && ar[i][j]==0) ar[i][j]=1e9;
	for(int i=1; i<=k; i++){
		int a, b, c; cin >> a >> b >> c;
		ar[a][b]=ar[b][a]=c;
	}
	
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n; j++) cout << ar[i][j] << " "; cout << endl;
//	} 		
	floyd();
}
