#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int ar[n+1];
	for(int i=0; i<n; i++) cin >> ar[i];
	cout << "Buoc 0: " << ar[0] << endl; 
	for(int i=1; i<n; i++){
		int val=ar[i], j=i-1;
		while(j>=0 && ar[j]>val){
			ar[j+1]=ar[j]; j--;
		}
		ar[j+1]=val;
		cout << "Buoc " << i << ": "; 
		for(int k=0; k<=i; k++) cout << ar[k] << " ";
		cout << endl;
	}
}
