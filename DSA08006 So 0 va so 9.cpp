#include<bits/stdc++.h>
using namespace std;

string solve(int n){
	queue<string> q;
	q.push("9");
	while(q.size()){
		string s=q.front();
		if(stoll(s)%n==0) return s;
		q.pop();
		q.push(s+"0");
		q.push(s+"9");
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << solve(n) << endl;
	}	
}
