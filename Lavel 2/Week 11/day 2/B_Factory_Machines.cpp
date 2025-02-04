#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
bool canMake(ll sec,vector<ll>& v,ll n,ll p){
    ll cnt = 0;
    for(int i=0;i<n;i++){
        cnt+=sec/v[i];
        if(cnt>=p) return true;
    }
    return (cnt>=p);
}
int main(){
    fast;
    ll n,p;cin>>n>>p;
    vector<ll>v(n);
    for(auto &i:v) cin>>i;
    ll l =1,r = 1e18,mid, needTime;
    while(l <= r){
        mid = (l+r)/2;
        if(canMake(mid,v,n,p)){
            needTime = mid;
            r = mid-1;
        }else l = mid+1;
    }
    cout<<needTime<<endl;
    return 0;
}