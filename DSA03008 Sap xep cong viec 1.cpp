#include<bits/stdc++.h>
using namespace std;
struct timee{
	int sta, en;
};
int cmp(timee a, timee b){
	return a.en<b.en;
}
int main(){		// sap xep mang theo thoi gian ket thuc cong viec 
	int t; cin >> t;
	while(t--){
		int n, res=1;
		cin >> n;
		timee lis[1005];
		for(int i=0; i<n; i++) cin >> lis[i].sta;
		for(int i=0; i<n; i++) cin >> lis[i].en;
		sort(lis, lis+n, cmp);
		int pos=0;
		for(int i=1; i<n; i++){
			if(lis[i].sta>=lis[pos].en){
				res++; pos=i;
			}
		}
		cout << res << endl;
	}
}

