#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,m; cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int>mp;
    int l =0,r =0;
    ll g_seg = 0;
    while(r<n){
        mp[v[r]]++;
        while(mp.size() > m){
            mp[v[l]]--;
            if(mp[v[l]] == 0) mp.erase(v[l]);
            l++;
        }
        g_seg += r-l+1;
        r++;
    }
    cout<<g_seg<<endl;
    return 0;
}
