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
        ll oddCnt =0;
        for(auto i:v){
            if(i%2 != 0) oddCnt+=i;
        }
        cout<<(oddCnt%2==0?"YES":"NO")<<endl;
    }
    return 0;
}