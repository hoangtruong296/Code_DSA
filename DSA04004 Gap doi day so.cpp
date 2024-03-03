#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){	// vi tri cua so 1 la 1,3,5,7,9 (vi tri le) = 2^0x1,3,5,7,9
	int t; cin >> t; //vi tri cua so 2 la 2,6,10,14,... (vi tri lex2) = 2^1x1,3,5,7,9 
	while(t--){		//vi tri cua so 3 la 4,12,... (vi tri lex2) = 2^2x1,3,5,7,9
					//(2^(n-1)x1,3,5,7,..) - cong thuc tinh vi tri
		ll n, k, c=0; cin >> n >> k;
		while(k%2==0){
			k/=2; c++;		// chia 2 cho den khi ra so le, lay so mu cua 2 + 1 la ra kqua
		}
		cout << c+1 << endl;
	}
}
// co the dung ham __builtin_ctz(x) cho int hoac __builtin_ctzll(x) cho long long
//This function is used to count the trailing zeros of the given integer. - dem so 0 dang sau so 1 trong he 2
// vd __builtin_ctz(8)=3 vi 8 trong he 2 la 1000
