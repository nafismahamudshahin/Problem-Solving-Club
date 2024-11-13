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
        int n,m;
        string s;
        cin>>n>>m>>s;
        int cnt =0;
        for(int i=0;i<m;i++){
            if(s[i] == 'W')cnt++;
        }
        int ans = cnt;
        for(int i=m;i<n;i++){
            if(s[i] == 'W')cnt++;
            if(s[i-m] == 'W') cnt--;
            ans = min(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}