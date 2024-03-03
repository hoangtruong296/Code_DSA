#include<bits/stdc++.h>
using namespace std;

int n, c=0, row[100]={0}, col[100]={0}, cr1[100]={0}, cr2[100]={0}; // cross 1,2 - cac duong cheo xuoi, nguoc
void back(int k){ 			// back tracking		cross nguoc=row-column+n  cross xuoi=row+col-1
	for(int i=1; i<=n; i++){
		if(col[i]==0 && cr1[k-i+n]==0 && cr2[k+i-1]==0){
			row[k]=i;
			col[i]=1;
			cr1[k-i+n]=1;
			cr2[k+i-1]=1;
			if(k==n) c++;
			else back(k+1);
			col[i]=0; cr1[k-i+n]=0; cr2[k+i-1]=0;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		back(1);
		cout << c; c=0;
		cout << endl;
	} 
}
