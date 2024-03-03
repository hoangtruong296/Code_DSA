#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n+1], c=-1e9, l=0;		
		for(int i=0; i<n; i++) cin >> ar[i];	
		map<int, int> mp;
		for(int i=0; i<n; i++){
			if(mp[ar[i]]==0) mp[ar[i]]=i+1;	// th so lap lai thi lay vi tri thap nhat cua no
			else mp[ar[i]]=min(mp[ar[i]], i+1);		
		} 
		sort(ar, ar+n);
		l=mp[ar[0]];		// danh dau so nho co vi tri thap
		for(int i=1; i<n; i++){		// xet mang da sap xep
			c=max(c, mp[ar[i]]-l);
			l=min(l, mp[ar[i]]);
		}
		if(c!=-1e9) cout << c;
		else cout << -1;
		cout << endl;
	}
}
