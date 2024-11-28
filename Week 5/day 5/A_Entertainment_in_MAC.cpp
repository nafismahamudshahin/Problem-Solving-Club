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
        int n;
        string s,r;
        cin>>n>>s;
        r = s;
        reverse(all(r));
        if(r>=s){
            if(n%2 ==0) cout<<s<<endl;
            else cout<<r<<endl;
        }else{
            if(n%2 == 1) cout<<r<<endl;
            else cout<<r<<s<<endl;
        }
    }
    return 0;
}