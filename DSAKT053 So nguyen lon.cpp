#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s, ss; cin >> s >> ss;
		int ar[s.length()+1][ss.length()+1];
		memset(ar, 0, sizeof(ar));
		for(int i=1; i<=s.length(); i++){
			for(int j=1; j<=ss.length(); j++){
				if(s[i-1]==ss[j-1]) ar[i][j]=ar[i-1][j-1]+1;
				else ar[i][j]=max(ar[i-1][j], ar[i][j-1]);
			}
		}
		cout << ar[s.length()][ss.length()] << endl;
	}
}
