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
        int n;cin>>n;
        vector<int>a(n);
        for(auto &i:a) cin>>i;
        reverse(all(a));
        while(!a.empty() && a.back() == 0) a.pop_back();
        if(!a.empty()){
            ll ans =0;
            reverse(all(a));
            n = a.size();
            for(int i=0;i<n-1;i++)
                if(a[i] == 0) ans++;
                else ans+=a[i];
            cout<<ans<<endl;
        }else cout<<0<<endl;
    }
    return 0;
}