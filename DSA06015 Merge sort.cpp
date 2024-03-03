#include<bits/stdc++.h>
using namespace std;

void merge(int ar[], int l, int r, int m){
	vector<int> v1(ar+l, ar+m+1), v2(ar+m+1, ar+r+1);
	int a=0, b=0;
	while(a<v1.size() && b<v2.size()){
		if(v1[a]<=v2[b]){
			ar[l++]=v1[a++];
		} else ar[l++]=v2[b++];
	}
	while(a<v1.size()) ar[l++]=v1[a++];
	while(b<v2.size()) ar[l++]=v2[b++];
}
void merge_sort(int ar[], int l, int r){
	if(l>=r) return;
	int m=(l+r)/2;
	merge_sort(ar, l, m);
	merge_sort(ar, m+1, r);
	merge(ar, l, r, m);
}
int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		int ar[n+1];
		for(int i=0; i<n; i++) cin >> ar[i];
		merge_sort(ar, 0, n-1);
		for(int i=0; i<n; i++) cout << ar[i] << " ";
		cout << endl;
	}
}
