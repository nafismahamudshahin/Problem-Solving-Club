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
        string v = "aeiou";
        string s,ans;
        for(int i=0;i<=200;i+=5){
            s+=v;
        }
        for(int i=0;i<n;i++){
            ans+=s[i];
        }
        sort(all(ans));
        cout<<ans<<endl;
    }
    return 0;
}
