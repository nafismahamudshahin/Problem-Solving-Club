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
        int n,a,b;cin>>n>>a>>b;
        if(a*2<b) cout<<n*a<<endl;
        else cout<<(b*(n/2))+((n%2)*a)<<endl;
    }
    return 0;
}