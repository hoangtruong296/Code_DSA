#include<bits/stdc++.h>
using namespace std;

int x[1000]={0}, n, ar[100][100];
vector<string> vs;
void dq(int i, int j, string s){
	if(ar[i][j]==0) return;
	if(i==n-1 && j==n-1){
		vs.push_back(s); return;
	} 
	if(ar[i+1][j]==1 && i+1<n && j<n){
		string ss=s+"D";
		dq(i+1, j, ss);
	}
	if(ar[i][j+1]==1 && j+1<n && i<n){
		string ss=s+"R";
		dq(i, j+1, ss);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> ar[i][j];
		string s;
		dq(0, 0, s);
		if(vs.size()==0) cout << "-1";
		else for(auto x:vs) cout << x << " ";
		vs.erase(vs.begin(), vs.end());
		cout << endl;
	}
}
