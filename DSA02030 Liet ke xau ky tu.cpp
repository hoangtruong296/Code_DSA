#include<bits/stdc++.h>
using namespace std;

int x[100]={0}, n, m;
char a; 
void backtr(int k){
	for(int i=x[k-1]; i<=m; i++){
		x[k]=i; 
		if(k==n){
			for(int j=1; j<=n; j++) cout << (char)(x[j]+'A'-1);
			cout << endl;
		} else backtr(k+1);
	}
}
int main(){
	cin >> a >> n;
	m=a-'A'+1;
	x[0]=1;
	backtr(1);
}
