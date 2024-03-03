#include<bits/stdc++.h>
using namespace std;

void in(set<int> &se, int n, map<int, int> &mp){
	for(int i=0; i<n; i++){
		int a; cin >> a; se.insert(a);	mp[a]++;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		set<int> se;
		int n, m, p, c=0; cin >> n >> m >> p;
		map<int, int> m1, m2, m3;
		in(se, n, m1); in(se, m, m2); in(se, p, m3);
		for(auto x:se){
			int cnt=min(m1[x], min(m2[x], m3[x]));
			if(cnt>0) c=1;
			while(cnt--) cout << x << " ";
		}	
		if(c==0) cout << "NO";
		cout << endl;
	}
}
