#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(int i=s.length()-1; i>=0; i--){
			if(s[i]>='A' && s[i]<='Z'){
				string a=" "; a[0]=s[i];
				st.push(a);
			} 
			else{
				string a=st.top();
				st.pop();
				a=a+st.top()+s[i];
				st.pop();
				st.push(a);
			}
		}
		cout << st.top();
		cout << endl;
	}
}
