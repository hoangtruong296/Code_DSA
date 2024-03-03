#include<bits/stdc++.h>
using namespace std;

int x[20]={0}, n, c;
void xnpkt(int k, int cnt){
	for(int i=0; i<=1; i++){
		x[k]=i;
		if(x[k]) cnt++;
		if(k==n){
			if(cnt==c){
				for(int j=1; j<=n; j++) cout << x[j];
				cout << endl;
			}
		} else xnpkt(k+1, cnt);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> c;
		xnpkt(1, 0);
		//cout << endl;
	}
}
