#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){		
	int t; cin >> t;
	while(t--){
		ll n, m; cin >> n >> m;
		ll c=0, c1=0, c0=0; 
		vector<int> v1(n, 0), v2(m, 0);
		map<int, ll> mp;
		for(int i=0; i<n; i++) cin >> v1[i];
		for(int i=0; i<m; i++){
			int a; cin >> a; v2[i]=a; mp[a]++; 
		} 
		sort(v1.begin(), v1.end());		// x^y>y^x khi x<y, co 1 so th dac biet
		sort(v2.begin(), v2.end());		// 2^3<3^2, 2^4=4^2, loai th x=2, y=3,4
		for(ll i=0; i<n; i++){		// 1^0>0^1, cac so x>1: x^0>0^x, x^1>1^x 
			if(v1[i]==0) continue;
			if(v1[i]==1) c+=mp[0];
			else {
				c=c+mp[0]+mp[1];
				ll pos=upper_bound(v2.begin(), v2.end(), v1[i])-v2.begin();
				c+=(m-pos);
				if(v1[i]==2){
					c-=(mp[3]+mp[4]);
				} 
				else if(v1[i]==3) c+=mp[2];	
			}	
		}
		cout << c << endl;
	}
}
