#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+5], res=0, c=0;
		for(int i=0; i<n; i++){
			int a; cin >> a; if(a>=0) c++;
			res=max(res, a);
			ar[i]=a;
		} 
		if(c){
			c=0;
			for(int i=0; i<n; i++){
				c+=ar[i];
				res=max(res, c);
				if(c<0) c=0;
			}
		}
		cout << res << endl;
	}
}
