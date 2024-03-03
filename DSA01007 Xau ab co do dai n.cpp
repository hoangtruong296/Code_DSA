#include<bits/stdc++.h>
using namespace std;

int x[12]={0}, n;
void xnpkt(int k){
	for(int i=0; i<=1; i++){
		x[k]=i;
		if(k==n){
			for(int j=1; j<=n; j++) cout << (char)(x[j]+'A');
			cout << " ";
		} else xnpkt(k+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		xnpkt(1);
		cout << endl;
	}
}
