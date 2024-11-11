#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    ll t;
    cin>>t;
    vector<string>v;
    string ans;
    unordered_map<string, int>ump;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i = t-1;i>=0;i--){
        if(ump[v[i]] ==0){
            int sz = v[i].size();
            ans+=v[i].substr(sz-2,sz-1);
        }
        ump[v[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}
