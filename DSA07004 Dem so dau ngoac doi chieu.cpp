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
				if(st.size()>0) st.pop();
				else{
					c++; st.push('(');
				} 				
			} else st.push(s[i]);
		}
		if(st.size()>0 && st.size()%2==0) cout << st.size()/2+c;
		else cout << c;
		cout << endl;
	}
}
