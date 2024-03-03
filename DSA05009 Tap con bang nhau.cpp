#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ar[105]={0}, n, sum=0;
void ql(int s, int k){
	if(k>=n || s>sum/2) return;
	for(int i=k; i<n; i++){
		if(s+ar[i]==sum/2){
			cout << "YES";
			sum=0; return;
		} else if(s+ar[i]<sum/2 && i+1<n) ql(s+ar[i], i+1);
		else return;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n; sum=0;
		for(int i=0; i<n; i++) cin >> ar[i];
		for(int i=0; i<n; i++) sum+=ar[i];
		if(sum%2){
			cout << "NO" << endl; 
		} else {
			ql(0, 0);
			cout << endl;	
		}
		// tap co 1 so chan thi k in ra kqua ??? vd tap A={2}
	}
}
