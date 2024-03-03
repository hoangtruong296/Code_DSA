#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int ar[10000]={0}; ar[0]=ar[1]=1;
		if(s[0]=='0'){
			cout << 0 << endl; continue;
		} 
		for(int i=2; i<=s.length(); i++){
			if(s[i-1]>'0') ar[i]+=ar[i-1];
			if(s[i-2]=='1' || s[i-2]=='2' && s[i-1]<='6') ar[i]+=ar[i-2];
		}
		cout << ar[s.length()] << endl;
	}
}
