#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int n, k, res=0;
	cin >> k >> n;
	int ar[n+2], br[25001]={0}; for(int i=1; i<=n; i++) cin >> ar[i];
	br[0]=1;
	for(int i=1; i<=n; i++){
		for(int j=k; j>=1; j--){		// xet tu gtri lon nhat ve nho nhat de 1 phan tu k
			if(j>=ar[i]) br[j]=max(br[j], br[j-ar[i]]);		// bi su dung nhieu lan
			if(br[j]==1) res=max(j, res);
		}
	}
	//for(int j=1; j<=k; j++) if(br[j]) cout << br[j] << " " << j << endl;
	cout << res;
}
