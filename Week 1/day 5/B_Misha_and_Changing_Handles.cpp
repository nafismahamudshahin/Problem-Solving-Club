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
    map<string,string>mp,has;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(has.find(a) != has.end()){
            string s = has[a];
            mp[s] = b;
            has.erase(a);
            has[b]= s;
        }else{
            mp[a] = b;
            has[b] = a;
        }
    }
    cout<<mp.size()<<endl;
    for(auto [key,val]:mp){
        cout<<key<<" "<<val<<endl;
    }
    return 0;
}