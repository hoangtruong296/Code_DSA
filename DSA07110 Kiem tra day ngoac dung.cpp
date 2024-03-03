#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<char> st; //st1-(, st2-[, st3-{
		int c=0;
		for(int i=0; i<s.length(); i++){
			if(s[i]=='(') st.push(s[i]);
			if(s[i]=='[') st.push(s[i]);
			if(s[i]=='{') st.push(s[i]);
			if(s[i]==')'){
				if(st.size()>0 && st.top()=='(') st.pop();	
			} 
			if(s[i]==']'){
				if(st.size()>0 && st.top()=='[') st.pop();	
			}
			if(s[i]=='}'){
				if(st.size()>0 && st.top()=='{') st.pop();
			}
		}
		if(st.size()>0) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}
