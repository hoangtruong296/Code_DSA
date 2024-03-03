#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+1][n+1];
		int c=0;
		for(int i=0; i<n; i++) cin >> ar[0][i];
		for(int i=1; i<n; i++){
			for(int j=0; j<=n-i-1; j++){
				ar[i][j]=ar[i-1][j]+ar[i-1][j+1];
			}
		}
		for(int i=n-1; i>=0; i--){
			cout << "[";
			for(int j=0; j<=n-i-1; j++){
				cout << ar[i][j];
				if(j!=n-i-1) cout << " ";
			}
			cout << "] ";
		}
		cout << endl;
	}
}
