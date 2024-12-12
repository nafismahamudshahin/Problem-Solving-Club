#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    string s;cin>>s;
    ll dis = s.length();
    ll ans =(1<<dis)-1,cnt =0;
    for(ll i =dis-1;i>=0;i--){
        if(s[i] !='4') ans += (1<< cnt);
        cnt++;
    }
    cout<<ans<<endl;
    return 0;
}