#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n; cin.ignore();
	int ar[51][51];
	memset(ar, 0, sizeof(ar));
	for(int i=1; i<=n; i++){
		string s, a; getline(cin, s);	// 1 dinh co the lien ket voi nhieu dinh khac
		stringstream ss(s);
		while(ss >> a){
			ar[i][stoi(a)]=ar[stoi(a)][i]=1;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(ar[i][j]){
				cout << i << " " << j << endl;
				ar[j][i]=0;
			}
		}
	}	
} 
