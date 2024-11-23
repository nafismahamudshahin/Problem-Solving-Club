#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int l =0,r =0,ans = INT_MAX;
    ll sum =0;
    while(r<n){
        sum+=v[r];
        if(sum>=m){
            bool flag = false;
            while(sum>=m){
                sum-=v[l];
                if(sum<=m) flag = true;
                l++;
            }
            if(flag) ans = min(ans,r-l+2);
            else ans = min(ans,r-l+1);
        }
        r++;
    }
    cout<<(ans == INT_MAX?-1:ans)<<endl;
    return 0;
}