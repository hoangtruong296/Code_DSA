#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, s, m; cin >> n >> s >> m;
		int need=s*m, have=0, c=0, day=s/7;
		while(have<need){
			have+=n; c++;				
		}
		if(s*m>(s-day)*n) cout << -1; // vi 1 tuan co 1 ngay nghi nen so ngay
		else cout << c;		// co the mua = s-s/7 -> so luong thuc co the mua la
		cout << endl;		// (s-s/7)*n
	}
}
