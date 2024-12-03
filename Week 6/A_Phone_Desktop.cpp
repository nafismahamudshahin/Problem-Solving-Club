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
        int a,b;cin>>a>>b;
        int totalSceen = ceil((double)b/2);
        int remain = (totalSceen*15)-(4*b);
        int s = max(0,a-remain);
        totalSceen+= (s+14)/15;
        cout<<totalSceen<<endl;
    }
    return 0;
}