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
    vector<int>v(n),v2(m);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) cin>>v2[i];
    vector<int>r(m);
    for(int i=0;i<m;i++){
        r[i] = lower_bound(all(v),v2[i])-v.begin();
    }
    for(auto i:r){
        cout<<i<<" ";
    }
    return 0;
}