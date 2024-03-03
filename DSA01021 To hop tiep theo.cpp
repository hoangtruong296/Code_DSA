#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		vector<int> vi;
		set<int> se;
		int n, k;
		cin >> n >> k;
		for(int i=1; i<=k; i++){
			int a; cin >> a; vi.push_back(a);
			se.insert(a);
		} 
		int i=k-1, c=0;
		while(vi[i]>=n-k+i+1) i--;
		if(i<0) cout << k;
		else {
			vi[i]++; if(se.count((vi[i]))==0) c++; 
			for(int j=i+1; j<=k-1; j++){
				vi[j]=vi[i]+j-i; 
				if(se.count((vi[j]))==0) c++; 
			}
			cout << c;	
		}
		cout << endl;
	}
}
