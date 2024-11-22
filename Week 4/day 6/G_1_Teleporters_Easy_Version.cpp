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
        ll n,m,sum =0;
        cin>>n>>m;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i] += i+1;
        }
        sort(all(v));
        int ans =0;
        for(int i=0;i<n;i++){
            if(sum+v[i] > m) break;
            sum+=v[i];
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}