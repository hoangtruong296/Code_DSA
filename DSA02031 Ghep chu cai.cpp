#include<bits/stdc++.h>
using namespace std;

int x[100]={0}, m, ch[100]={0};
char a; 
void check(){
	string s;
	for(int j=1; j<=m; j++) s+=(char)(x[j]+'A'-1);
	if((s[0]=='A' || s[s.length()-1]=='A') && m<=4) cout << s << endl;	
	else if(s.find("AE")!=string::npos || s.find("EA")!=string::npos || ((s[0]=='A' || s[s.length()-1]=='A') && (s[0]=='E' || s[s.length()-1]=='E'))){
		cout << s << endl;
	}
}
void backtr(int k){
	for(int i=1; i<=m; i++){
		if(ch[i]==0){
			x[k]=i; ch[i]=1;
			if(k==m){
				check();
			} else backtr(k+1);
			ch[i]=0;	
		}
	}
}
int main(){
	cin >> a;
	m=a-'A'+1;
	backtr(1);
}
