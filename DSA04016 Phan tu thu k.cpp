#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		int a=0, b=0, ar[n+1], br[m+1], size=0;
		for(int i=0; i<n; i++) cin >> ar[i];
		for(int i=0; i<m; i++) cin >> br[i];
		vector<int> vi;
		while(size!=k){
			if(ar[a]<br[b]) vi.push_back(ar[a++]);
			else vi.push_back(br[b++]);
			size=vi.size();
		}
		cout << *vi.rbegin();
		cout << endl;
	}
}
