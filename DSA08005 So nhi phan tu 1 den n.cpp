#include<bits/stdc++.h>
using namespace std;

stack<int> cal(int a){
	stack<int> st;
	while(a>0){
		st.push(a%2);
		a/=2;
	}
	return st;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		stack<int> st;
		for(int i=1; i<=n; i++){
			st=cal(i);
			while(st.size()>0){
				cout << st.top();
				st.pop();
			}
			cout << " ";
		}
		cout << endl;
	}
}
