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
        int n,XOR =0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            XOR ^= v[i];
        }
        int res = XOR;
        for(int i=0;i<n;i++){
            int currXOR = (XOR ^ v[i]);
            res = min(res,currXOR);
        }
        cout<<res<<endl;
    }
    return 0;
}