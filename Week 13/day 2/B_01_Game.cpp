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
        string s;cin>>s;
        int one =0,zero =0;
        for(auto i:s)
            if(i =='0') zero++;
            else one++;
        int k = min(one,zero);
        cout<<(k%2!=0?"DA":"NET")<<endl;
    }
    return 0;
}