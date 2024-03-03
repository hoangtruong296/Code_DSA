#include<bits/stdc++.h>
using namespace std;
#define ll long long 
struct item{
	int a, b; // a-the tich, b-gtri
};
int main(){
	int t; cin >> t;
	while(t--){
		int n, k, res=0;
		cin >> n >> k;
		item it[n+2];
		int ar[1001]={0};
		it[0].a=it[0].b=0;
		for(int i=1; i<=n; i++) cin >> it[i].a;
		for(int i=1; i<=n; i++) cin >> it[i].b;
		for(int i=1; i<=n; i++){
			for(int j=k; j>=1; j--){
				if(j>=it[i].a) ar[j]=max(ar[j], ar[j-it[i].a]+it[i].b);
				res=max(res, ar[j]);
			}
		}
		cout << res << endl;
	}
}
