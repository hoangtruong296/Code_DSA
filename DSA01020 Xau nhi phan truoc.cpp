#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s; 
		int c=1;
		for(int i=s.length()-1; i>=0; i--){
			if(s[i]=='1'){
				s[i]='0';
				for(int j=i+1; j<s.length(); j++) s[j]='1';
				cout << s;
				c=0; break;
			}
		} 
		int len=s.length();
		if(c) while(len--) cout << "1";
		cout << endl;
	}
}
