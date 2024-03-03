#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct pos{
	int x, y, cnt;
};
int main(){
	int t; cin >> t;
	while(t--){
		int n, m, res=1e9; cin >> n >> m;
		int ar[n+1][m+1], check[n+1][m+1];
		memset(check, 1, sizeof(check));
		for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> ar[i][j];
		queue<pos> q;
		pos p1;
		p1.cnt=p1.x=p1.y=0;
		q.push(p1);
		while(q.size()){
			pos a=q.front();
			q.pop();
			if(a.x==n-1 && a.y==m-1){
				res=min(res, a.cnt); 
			} 
			if(a.x>=n || a.y>=m || a.cnt>res) continue;

			if(a.x+ar[a.x][a.y]<n && check[a.x+ar[a.x][a.y]][a.y]){
				q.push({a.x+ar[a.x][a.y], a.y, a.cnt+1});
				check[a.x+ar[a.x][a.y]][a.y]=0;
			}
			if(a.y+ar[a.x][a.y]<m && check[a.x][a.y+ar[a.x][a.y]]){
				q.push({a.x, a.y+ar[a.x][a.y], a.cnt+1});
				check[a.x][a.y+ar[a.x][a.y]]=0;
			}
		}
		if(res==1e9) cout << -1 << endl;
		else cout << res << endl;
	}	
}
