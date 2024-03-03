#include<bits/stdc++.h>
using namespace std;

int x[100]={0}, n, ch[100]={0};		// giong bai so xa cach
void backtr(int k){
	for(int i=1; i<=n; i++){
		if(ch[i]==0 && abs(i-x[k-1])!=1){
			x[k]=i; ch[i]=1;
			if(k==n){
				for(int j=1; j<=n; j++) cout << x[j];
				cout << endl;
			} else backtr(k+1);
			ch[i]=0;	
		}
		
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		x[0]=-1;
		backtr(1);	
	}
}
