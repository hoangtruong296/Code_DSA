#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int ar[n+1], c=1, check=0;
	for(int i=0; i<n; i++) cin >> ar[i];
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ar[j]<ar[i]){
				 swap(ar[i], ar[j]); check=1;
			} 
		}
		if(check){
			cout << "Buoc " << c << ": "; c++;
			for(int k=0; k<n; k++) cout << ar[k] << " ";
			cout << endl;	
		}
					
	}
}
