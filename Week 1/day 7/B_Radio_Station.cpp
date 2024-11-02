#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    while(n--){
        string name,ip;
        cin>>name>>ip;
        mp[ip] = name;
    }
    while(m--){
        string name,ip;
        cin>>name>>ip;
        ip.pop_back();
        cout<<name<<" "<<ip<<";"<<" #"<<mp[ip]<<endl;
    }
    return 0;
}