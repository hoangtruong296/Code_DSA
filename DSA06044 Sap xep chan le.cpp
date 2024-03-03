#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> vi, vii;
	for(int i=1; i<=n; i++){
		int a; cin >> a;
		if(i%2) vi.push_back(a);
		else vii.push_back(a);
	}
	sort(vi.begin(), vi.end());
	sort(vii.begin(), vii.end(), greater<int>());
	for(int i=0; i<vi.size(); i++){
		cout << vi[i] << " ";
		if(i<vii.size()) cout << vii[i] << " ";
	}
}
