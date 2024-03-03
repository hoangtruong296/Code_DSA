#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t; 
	while(t--){
		ll a, n, c=1, p=1e9+7;
		cin >> a >> n;
		while(n>0){
			if(n%2) c=((c%p)*a)%p;
			a*=a; a%=p;
			n/=2;
		}
		cout << c << endl;
	}	
}
