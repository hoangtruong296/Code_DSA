#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<char> st;
		int c=0;
		for(int i=0; i<s.length(); i++){
			if(s[i]==')'){
				if(st.size()>0){
					st.pop(); c+=2;
				} 				
			} else st.push(s[i]);
		}
		cout << c;
		cout << endl;
	}
}
