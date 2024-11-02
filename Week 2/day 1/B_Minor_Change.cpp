#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    string s,t;
    cin>>s>>t;
    int cnt =0;
    for(int i=0;i<s.length();i++){
        if(s[i] != t[i])cnt++;
    }
    cout<<cnt;
    return 0;
}