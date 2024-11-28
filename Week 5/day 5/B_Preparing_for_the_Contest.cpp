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
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<k;i++){
            v.push_back(n-i);
        }
        for(int i=0;i<n-k;i++){
            v.push_back(i+1);
        }
        reverse(all(v));
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}