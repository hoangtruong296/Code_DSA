#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	 while(t--){
		 int n, m; cin >> n >> m;
		 int ar[n+1], br[n+1];
		 set<int> se;
		 map<int, int> mp;
		 for(int i=0; i<n; i++){
			int a; cin >> a; mp[a]++;
			se.insert(a);
		 }
		 for(int i=0; i<m; i++){
			int a; cin >> a; mp[a]++;
			se.insert(a);
		 }
		 for(auto x:se){		// hop
		 	cout << x << " ";
		 }
		 cout << endl;
		 for(auto x:se){		// giao
		 	if(mp[x]==2) cout << x << " ";
		 }
		 cout << endl;
	 }
}
