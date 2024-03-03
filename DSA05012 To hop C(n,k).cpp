#include<bits/stdc++.h>
using namespace std;
#define ll long long
int p=1e9+7;

int main(){
	int t; cin >> t; 
	while(t--){		
		int n, k; cin >> n >> k; // C(n,k)=C(n-1,k)+C(n-1,k-1)
		ll ar[1001][1001]={0}; 
		for(int i=0; i<=1000; i++){
			for(int j=0; j<=1000; j++){
				if(i<j) break; //dung mang dong phai co dk nay, k thi RTE, mang tinh~ k can
				if(i==j || j==0) ar[i][j]=1;		// k hieu li do
				else ar[i][j]=(ar[i-1][j]+ar[i-1][j-1])%p;
			}	
		}
		cout << ar[n][k] << endl;
	}
}
