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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            mp[val]++;
        }
        int cnt =0;
        for(auto [x,y]:mp){
            cnt+=y/3;
        }
        cout<<cnt<<endl;
    }
    return 0;
}