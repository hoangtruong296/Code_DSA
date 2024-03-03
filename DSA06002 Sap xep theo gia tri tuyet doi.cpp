#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long
//dung mang br[100005] danh dau vi tri ptu thi WA, kha nang la do ptu co the lon hon 10^5
int n, k; 
struct num{
	int a, b; // a la gtri, b la vi tri
};
int cmp(num n, num m){
	if(abs(n.a-k)==abs(m.a-k) && n.b<m.b) return 1;
	if(abs(n.a-k)<abs(m.a-k)) return 1;
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		num ar[n+5];
		for(int i=0; i<n; i++){
			cin >> ar[i].a;
			ar[i].b=i;
		} 
		sort(ar, ar+n, cmp);
		for(int i=0; i<n; i++) cout << ar[i].a << " ";
		cout << endl;
	}
}
