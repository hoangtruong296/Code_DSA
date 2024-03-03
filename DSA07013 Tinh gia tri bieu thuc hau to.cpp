#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> st;
		for(int i=0; i<s.length(); i++){
			if(s[i]>='0' && s[i]<='9'){
				st.push(s[i]-'0');
			} 
			else{
				int a=st.top();
				st.pop();
				if(s[i]=='+') a=st.top()+a;
				if(s[i]=='-') a=st.top()-a;
				if(s[i]=='*') a=st.top()*a;
				if(s[i]=='/') a=st.top()/a;
				st.pop();
				st.push(a);
			}
		}
		cout << st.top();
		cout << endl;
	}
}
