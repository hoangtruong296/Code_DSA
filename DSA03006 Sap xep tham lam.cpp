#include<bits/stdc++.h>
using namespace std;

int check(int ar[], int l, int r){
	for(int i=l; i<=r-1; i++) if(ar[i]>=ar[i+1]) return 0;
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[100]={0};
		for(int i=1; i<=n; i++) cin >> ar[i];
		int l=1, r=n;
		while(l<r){
			int c=0;
			if(ar[l]<ar[l+1]) l++;
			else c++;
			if(ar[r]>ar[r-1]) r--;
			else c++;
			if(c==2) reverse(&ar[l], &ar[r+1]);
			if(c==1) break;	
		}
		if(check(ar, 1, n)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
