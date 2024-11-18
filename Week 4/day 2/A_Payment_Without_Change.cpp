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
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll x = min(a,s/n);
        ll need_coins = s-(x*n);
        cout<<(need_coins <= b?"YES":"NO")<<endl;
    }
    return 0;
}