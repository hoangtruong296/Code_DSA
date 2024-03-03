#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cal(int ar[], int n, int k, int c){
	for(int i=c; i>=0; i--){
		if(k>=ar[i]) k-=ar[i];
	}
	return k==0;
}
int main(){	
	int t; cin >> t; 
	while(t--){
		int n, k, res=0; cin >> n >> k;
	    int ar[208]={0};
	    for(int i=0; i<n; i++){
	    	cin >> ar[i];
	    } 
	    sort(ar, ar+n);
	    for(int i=n-1; i>=0; i--){
	        if(cal(ar, n, k, i)){
	        	res=1; break;
	        } 
	    }
	    if(res) cout << "YES";
	    else cout << "NO";
	    cout << endl;	
	}
    		
}
