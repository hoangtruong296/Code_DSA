#include<iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[1001]={0};
		for(int i=0; i<n; i++) cin >> ar[i];
		int s, res=1e9; // 1 tong am , 1 tong duong
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(abs(ar[i]+ar[j])<abs(res)){
					res=ar[i]+ar[j];
				}
			}
		}
		cout << res;
		cout << endl;
	}
}
