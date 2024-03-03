#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<set<int>> vi(n+1);
		for(int i=0; i<k; i++){
			int a, b; cin >> a >> b;
			vi[a].insert(b);
			vi[b].insert(a);
		}
		for(int i=1; i<=n; i++){
			cout << i << ": ";
			for(auto x:vi[i]) cout << x << " ";
			cout << endl;
		}
	}	
}
