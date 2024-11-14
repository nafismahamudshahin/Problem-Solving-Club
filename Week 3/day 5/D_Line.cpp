#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        cin>>n>>s;
        vector<ll>v(n,0);
        ll sum =0;
        for(int i=0;i<n;i++){
            ll cur;
            if(s[i] == 'L'){
                cur = i;
            }else cur = n-i-1;
            ll mx;
            if(i>(n-i-1)){
                mx = i;
            }else mx = (n-i-1);
            sum+=cur;
            v[i] = mx - cur;
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++){
            sum+=v[i];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}