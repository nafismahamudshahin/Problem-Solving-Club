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
        int n,c,ans =0;cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++){
            cin>>c;
            ans = __gcd(ans,abs(c-i));
        }
        cout<<ans<<endl;
    }
    return 0;
}