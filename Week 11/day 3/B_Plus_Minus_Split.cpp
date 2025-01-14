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
        string s;cin>>s;
        int plus =0,minus =0;
        for(auto i:s){
            if(i=='+') plus++;
            else minus++;
        }
        cout<<abs(plus-minus)<<endl;
    }
    return 0;
}