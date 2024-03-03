#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int n){
	queue<string> q;
	q.push("6");
	q.push("8");
	vector<string> vs;
	while(q.size()){
		string s=q.front();
		if(s.length()>n){
			for(int i=vs.size()-1; i>=0; i--) cout << vs[i] << " ";
			cout << endl;
			return;
		}
		vs.push_back(s);
		q.pop();
		q.push(s+"6");
		q.push(s+"8");
	}
	return;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		solve(n);
	}	
}
