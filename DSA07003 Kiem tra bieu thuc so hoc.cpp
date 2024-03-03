#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stack<char> st;
		int c=0;
		for(int i=0; i<s.length(); i++){
			if(s[i]==')'){
				c=1;
				char top=st.top(); st.pop();
				while(top!='('){
					if(top=='+' || top=='-' || top=='*' || top=='/') c=0;
					top=st.top(); st.pop();
				}	
				if(c) break;
			} else st.push(s[i]);
		}
		if(c) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
