#include<iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s, ss;
		for(int i=0; i<n; i++){
			string a; cin >> a;
			s+=a;
		}
		for(int i=0; i<10; i++){
			if(s.find(to_string(i))!=string::npos) ss=ss+" "+to_string(i);
		}
		ss.erase(0,1);
		cout << ss << endl; 
	}
}
