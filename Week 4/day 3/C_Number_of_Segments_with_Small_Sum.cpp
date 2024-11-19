#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;
    ll k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int l=0,r=0;
    ll sum =0,ans =0;
    while(r<n){
        sum+=v[r];
        if(sum <= k) ans += (r-l+1);
        else{
            while(sum > k && l <= r){
                sum -= v[l];
                l++;
            }
            if(sum <= k) ans += (r-l+1);
        }
        r++;
    }
    cout<<ans;
    return 0;
}