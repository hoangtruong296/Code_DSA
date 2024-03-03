#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){		
		int n; cin >> n;		// chi co 1 ki tu lap lai max lan, vd xau aaabccc voi n=3 k hop le, 
		string s; 				//a va c lap 3 lan, neu b, c lap 2 lan thi hop le (abcabc)
		cin >> s;		
		int ar[200]={0}, mx=0;	
		for(int i=0; i<s.length(); i++) ar[s[i]]++;
		for(int i=0; i<200; i++) mx=max(mx, ar[i]);
		int c=0;
		for(int i=0; i<200; i++) if(mx==ar[i]) c++;
		//cout << c << " " << mx << endl;
		if( ((mx-1)*(n-1)<=s.length()-mx)) cout << "1";
		else cout << "-1";
		cout << endl; 
	}
}
