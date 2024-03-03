#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n){
	queue<string> q;
	q.push("1");
	int c=0;
	while(q.size()){
		string s=q.front();
		if(stoll(s)<=n) c++;
		else return c;
		q.pop();
		q.push(s+"0");
		q.push(s+"1");
	}
	return c;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << solve(n) << endl;
	}	
}
