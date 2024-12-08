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
        deque<ll>ans;
        for(int i =0;i<= __lg(n);i++){
            if((n>>i) & 1){
                ll val =n-(1LL << i);
                if(val > 0) ans.push_front(val);
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<endl;
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}