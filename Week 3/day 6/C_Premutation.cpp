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
        int n;cin>>n;
        vector<vector<ll>>v(n,vector<ll>(n));
        vector<ll>cnt(n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>v[i][j];
                if(j == 0) cnt[v[i][j]]++;
            }
        }
        int d = -1;
        for(int i=0;i<=n;i++){
            if(cnt[i] == n-1){
                cout<<i<<" ";
                d = i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i][0] != d){
                for(int j=0;j<n-1;j++){
                    cout<<v[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
