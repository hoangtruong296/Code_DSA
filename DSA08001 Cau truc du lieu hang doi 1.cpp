#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m; cin >> m;
		int n, last=0; 
		queue<int> q;
		while(m--){
			cin >> n;
			switch(n){
				case 1:
					cout << q.size() << endl;
					break;
				case 2:
					if(q.size()) cout << "NO";
					else cout << "YES";
					cout << endl;
					break;
				case 3:
					int a; cin >> a;
					q.push(a);
					break;
				case 4:
					if(q.size()){
						q.pop(); 
					} 
					break;
				case 5:
					if(q.size()) cout << q.front() << endl;
					else cout << -1 << endl;
					break;
				case 6:
					if(q.size()) cout << q.back() << endl;
					else cout << -1 << endl;
					break;
			}
		}	
	}
}
