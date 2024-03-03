#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int res=0, n; cin >> n;
    int ar[1001]={0}, br[1001]={0};
    for(int i=0; i<n; i++) cin >> ar[i];
    //memset(br, 1, sizeof(br));  memset chi hoat dong voi int khi set =-1, 0
    for(int i=0; i<n; i++) br[i]=1;
    for(int i=1; i<n; i++){
        int temp=0;
        for(int j=0; j<i; j++){
            if(ar[j]<ar[i]) temp=max(temp, br[j]); 
        }
        br[i]+=temp;
        res=max(res, br[i]);
    }
    cout << res << endl;		
}
