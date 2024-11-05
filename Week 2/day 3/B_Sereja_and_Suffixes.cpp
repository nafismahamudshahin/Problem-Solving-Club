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
    vector<int>a(n+1);
    vector<int> cnt(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    set<int>s;
    for(int i =n;i>=1;i--){
        s.insert(a[i]);
        cnt[i] = s.size();
    }
    for(int i=1;i<=m;i++){
        int pos;
        cin>>pos;
        cout<<cnt[pos]<<endl;
    }
    return 0;
}