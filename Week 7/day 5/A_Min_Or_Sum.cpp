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
        int n,ans =0;cin>>n;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            ans|= a;
        }
        cout<<ans<<endl;
    }
    return 0;
}