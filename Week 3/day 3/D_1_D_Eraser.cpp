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
        int n,m;
        string s;
        cin>>n>>m>>s;
        ll operation = 0;
        for(ll i =0;i<n;i++){
            if(s[i] == 'B'){
                operation++;
                i+=m-1;
            }
        }
        cout<<operation<<endl;
    }
    return 0;
}