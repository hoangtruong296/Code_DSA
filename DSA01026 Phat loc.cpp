#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, x[20]={0};
vector<string> vs;
void check(){
	string s;
	for(int i=1; i<=n; i++) s+=to_string(x[i]);
	if(s[0]=='8' && s[s.length()-1]=='6' && s.find("88")==string::npos && s.find("6666")==string::npos) 
		vs.push_back(s);
}
void xnpkt(int a){
	for(int i=0; i<=1; i++){
		if(i==0) x[a]=6;
		else x[a]=8;
		if(a==n){
			check();
		} else xnpkt(a+1);	
	}
}
int cmp(string a, string b){
	if(a<b) return 1;
	return 0;
}
int main(){ 		// su dung quay lui xau nhi phan, coi 8 la 1, 6 la 0
	cin >> n;
	xnpkt(1);
	sort(vs.begin(), vs.end(), cmp);
	for(int i=0; i<=vs.size()-1; i++) cout << vs[i] << endl;
}
