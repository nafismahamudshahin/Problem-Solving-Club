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
        int n,m;cin>>n>>m;
        if(n<m){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<((n-m)%2==0?"YES":"NO")<<endl;
    }
    return 0;
}