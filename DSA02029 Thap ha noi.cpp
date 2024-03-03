#include<bits/stdc++.h>
using namespace std;

void thaphn(int n, char a, char b, char c){
	if(n==1){
		cout << a << " -> " << c << endl; 
		return;
	} 
	thaphn(n-1, a, c, b);
	thaphn(1, a, b, c);
	thaphn(n-1, b, a, c);
}
int main(){
	int n; cin >> n;
	thaphn(n, 'A', 'B', 'C');
}
