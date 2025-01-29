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
        int max_val = INT_MIN;
        for(int i=0;i<n-1;i++) max_val = max(max_val,v[i]);
        cout << v[n-1] + max_val << '\n';
    }
    return 0;
}