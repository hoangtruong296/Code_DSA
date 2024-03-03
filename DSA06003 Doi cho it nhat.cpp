#include<bits/stdc++.h>
using namespace std;

int main(){		
	int t; cin >> t;
	while(t--){
		int n, c=0; cin >> n;
		int ar[n+5];
		for(int i=0; i<n; i++) cin >> ar[i];
		for(int i=0; i<n-1; i++){
			int pos=i;
			for(int j=i+1; j<n; j++){
				if(ar[pos]>ar[j]) pos=j;
			}
			if(pos!=i){
				swap(ar[pos], ar[i]); c++;
			}
		}
		cout << c << endl;
	}
}
