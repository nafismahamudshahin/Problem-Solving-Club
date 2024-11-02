#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,x;
    cin>>n>>x;
    vector<ll>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a != x){
            v.push_back(a);
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}