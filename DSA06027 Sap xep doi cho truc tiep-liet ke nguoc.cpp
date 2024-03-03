#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+1];
		vector<string> vs;
		for(int i=0; i<n; i++) cin >> ar[i];
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(ar[i]>ar[j]) swap(ar[i], ar[j]);
			}
			string s;
			for(int j=0; j<n; j++) s=s+" "+to_string(ar[j]);
			vs.push_back(s);
		}
		for(int i=vs.size()-1; i>=0; i--) cout << "Buoc " << i+1 << ":" << vs[i] << endl;
	}
}
