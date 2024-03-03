#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+1], br[n+1];
		for(int i=0; i<n; i++) cin >> ar[i];
		br[n-1]=-1;
		for(int i=n-2; i>=0; i--){
			int c=1;
			for(int j=i+1; j<n; j++){
				if(ar[j]>ar[i]){
					br[i]=ar[j]; c=0; break;
				} else if(br[j]>ar[i]){
					br[i]=br[j]; c=0; break;
				}
			}
			if(c) br[i]=-1;
		}
		for(int i=0; i<n; i++) cout << br[i] << " ";
		cout << endl;
	}
}
