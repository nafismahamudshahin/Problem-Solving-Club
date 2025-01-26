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
        ll n;cin>>n;
        vector<ll>v(n);
        for(auto &i:v) cin>>i;
        sort(all(v));
        v[0]+=1;
        ll ans =1;
        for(auto i:v) ans*=i;
        cout<<ans<<endl;
    }
    return 0;
}