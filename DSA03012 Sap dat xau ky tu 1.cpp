#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){		// so khoang trong can thiet cua ky tu bi lap lai nhieu nhat phai <= so ky tu con lai
		string s; cin >> s;			// trong xau, vd aaabbc thi a bi lap lai nhieu nhat
		int ar[30]={0}, mx=0;		// so khaong trong can it nhat la 2, ma so ky tu con lai la 3 (bbc)
		for(int i=0; i<s.length(); i++) ar[s[i]-'a']++;
		for(int i=0; i<27; i++) mx=max(mx, ar[i]);
		if(mx-1<=s.length()-mx) cout << "1";
		else cout << "-1";
		cout << endl; 
	}
}
