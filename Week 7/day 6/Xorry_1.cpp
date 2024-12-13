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
        ll a;cin>>a;
        ll i=0,j=0,pos =0;
        while(1<<pos <= a) pos++;
        i = 1<<pos-1;
        j = a^i;
        cout<<j<<" "<<i<<endl;
    }
    return 0; 
}