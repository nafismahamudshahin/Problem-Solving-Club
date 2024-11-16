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
        cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;
        int cnt =0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i = n-1;i>=0;i--){
            if(mp[v[i]] == 0){
                cnt++;
            }else break;
            mp[v[i]]++;
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}