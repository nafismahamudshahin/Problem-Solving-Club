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
        ll n;
        cin>>n;
        if(n%2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(ll i=0;i<n/2;i++){
            cout<<(i%2?"AA":"BB");
        }
        cout<<endl;
    }
    return 0;
}

