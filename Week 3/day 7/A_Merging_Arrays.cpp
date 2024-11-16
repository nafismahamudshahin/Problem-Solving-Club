#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    multiset<int>ml;
    for(auto i:a){
        ml.insert(i);
    }
    for(auto i:b){
        ml.insert(i);
    }
    for(auto i:ml){
        cout<<i<<" ";
    }
    return 0;
}