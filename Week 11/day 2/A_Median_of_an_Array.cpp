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
        int n,mid,cnt =0;cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        sort(all(v));
        mid = ((n+1)/2);
        for(int i=mid;i<=n;i++) if(v[i]==v[mid]) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}