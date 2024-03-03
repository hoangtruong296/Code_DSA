#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){		
		int n, k; cin >> n >> k;
		int ar[n+1];
		for(int i=0; i<n; i++) cin >> ar[i];
		set<int> se;
		map<int, int> mp;		// co th cac ptu trung lap
		for(int i=0; i<k; i++){
			se.insert(ar[i]); mp[ar[i]]++;
		} 
		cout << *se.rbegin() << " ";
		for(int i=k; i<n; i++){
			mp[ar[i-k]]--;
			if(mp[ar[i-k]]==0) se.erase(ar[i-k]);
			se.insert(ar[i]); mp[ar[i]]++;
			cout << *se.rbegin() << " ";
		}
		cout << endl;
	}
}
