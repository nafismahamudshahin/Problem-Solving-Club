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
        int n;
        ll max_money;
        cin>>n>>max_money;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        ll r =0, f =0,ans =0;
        for(int l=0;l<n;l++){
            f += a[l];
            while(r <= l && f > max_money){
                f -=a[r];
                r++;
            }
            if(l>0)
                if(r<l && (b[l-1] % b[l] != 0)){
                    r = l;
                    f = a[l];
                }
            ans = max(ans,l-r+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}