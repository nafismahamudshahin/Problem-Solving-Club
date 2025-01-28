#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t;cin>>t;
    while(t--){
        vector<string>v(8);
        for(int i=0;i<8;i++) cin>>v[i];
        int r =0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)
                if(v[i][j] == 'R') r++;
            if(r==8) break;
            else r =0;
        }
        cout<<(r==8?"R":"B")<<endl;
    }
    return 0;
}