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
        vector<int>v(n);
        for(auto &i:v) cin>>i;
        sort(all(v));
        int cnt =0;
        for(int i=1;i<n;i++) cnt+= v[i] - v[i-1];
        cout<<cnt<<endl;
    }
    return 0;
}