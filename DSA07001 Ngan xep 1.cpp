#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; 
	vector<int> vi;		// k dung stack vi phai in theo thu tu nhap
	while(getline(cin, s)){
		string a, b[2];
		int c=0;
		stringstream ss(s);
		while(ss >> a) b[c++]=a;
		if(b[0]=="push") vi.push_back(stoi(b[1]));
		if(b[0]=="pop") vi.pop_back();
		if(b[0]=="show"){
			if(vi.size()==0) cout << "empty";
			else {
				for(auto x:vi) cout << x << " ";
			}
			cout << endl;
		} 
	}
}
