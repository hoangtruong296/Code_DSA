#include<bits/stdc++.h>
using namespace std;
#define ll long long
int x[20]={0}, n, k, ar[20]={0}, ch[10]={0};
ll num=0;
int check(){
	for(int i=1; i<=k; i++) if(ar[i]!=x[i]) return 0;
	return 1;
}
void xkt(int a){
	for(int i=x[a-1]+1; i<=n-k+a; i++){
		if(ch[i]==0){
			x[a]=i;
			ch[i]=1;
			if(a==k){
				num++;
				if(check()){
					cout << num;
					//ch[i]=0; return;
				}  
			} else xkt(a+1);
			ch[i]=0;		
		}	
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=k; i++) cin >> ar[i];
		xkt(1); num=0;
		cout << endl;
	}
}
