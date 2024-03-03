#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		int res=0;
		int **m=new int*[1005];
		for(int i=0; i<1005; i++) m[i]=new int[1005];
		for(int i=0; i<1005; i++) for(int j=0; j<1005; j++) m[i][j]=0;
		for(int i=1; i<=a.size(); i++){
			for(int j=1; j<=b.size(); j++){
				if(a[i-1]==b[j-1]){
					m[i][j]=m[i-1][j-1]+1;
				} else m[i][j]=max(m[i-1][j], m[i][j-1]);
				res=max(m[i][j], res);
			}
		}
		for(int i=0; i<1005; i++) delete[]m[i];
		delete[]m;
		cout << res << endl;		
	}
}
