#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> vi;
	for(int i=0; i<n; i++){
		int a; cin >> a; vi.push_back(a);
	}
	int c=1, i=0, cnt=0;
	while(i<n){
		if(vi[i]<vi[0]){
			int a=vi[i];
			vi.erase(vi.begin()+i);
			vi.insert(vi.begin(), a);
			cnt++;
		} else if(vi[i]>vi[vi.size()-1]){
			vi.push_back(vi[i]);
			vi.erase(vi.begin()+i);
			cnt++;
		}
		i++;
	}
	cout << cnt ;
}
