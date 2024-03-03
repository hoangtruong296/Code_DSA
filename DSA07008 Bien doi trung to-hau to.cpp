#include<bits/stdc++.h>
using namespace std;

int check(char c) {
	if (c == '+' || c == '-')return 1;
	if (c == '*' || c == '/')return 2;
	if (c == '^')return 3;
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s, res=""; cin >> s;
		stack<char> st;
		for(int i=0; i<s.length(); i++){
			if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z') res+=s[i];	
			else if(s[i]=='(') st.push(s[i]);
			else if(s[i]==')'){
				while(st.size() && st.top()!='('){
					res+=st.top(); 
					st.pop();
				}
				st.pop(); // thieu dong nay
			}
			else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
				while(st.size() && check(st.top())>=check(s[i])){
					if(st.top()!='(') res+=st.top(); 
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(st.size()){
			if(st.top()!='(') res+=st.top(); 
			st.pop();
		}
		cout << res << endl;
	}
}
