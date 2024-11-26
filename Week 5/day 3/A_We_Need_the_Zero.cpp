#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        ll x = 0,y = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            x^=v[i];
        }
        for(int i=0;i<n;i++){
            v[i]^=x;
            y^= v[i];
        }
        cout<<(y ==0?x:-1)<<endl;
    }
    return 0;
}