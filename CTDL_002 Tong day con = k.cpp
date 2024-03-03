#include<bits/stdc++.h>
using namespace std;

int x[1000]={0}, n=0, c=0, k=0, a[1000]={0};
int check(){
	int sum=0;
	for(int i=0; i<n; i++) sum+=(a[i]*x[i]);	// check tong
	return sum==k;
}
void xnpkt(int f){			// sinh xau nhi phan
	if(f>=n) return;
	for(int i=0; i<=1; i++){		
		x[f]=i;
		if(f==n-1 && check()){
			c++;
			for(int j=0; j<n; j++) if(x[j]) cout << a[j] << " ";
			cout << endl;	
		} else xnpkt(f+1);
	}
}
int main(){
	cin >> n >> k;
	for(int i=0; i<n; i++) cin >> a[i];
	xnpkt(0);
	cout << c;
}

