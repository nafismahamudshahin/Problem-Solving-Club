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
        int n;cin>>n;
        string c,s;
        cin>>s;c = s;
        sort(all(s));
        auto uniq = unique(all(s));
        int size = 0;
        vector<char>uniq_char;
        for(auto it = s.begin();it != uniq;it++){
            uniq_char.push_back(*it);
            size++;
        }
        map<char,char>mp;
        int i=0,j=size-1;
        while(i<=j){
            mp[uniq_char[i]] = uniq_char[j];
            mp[uniq_char[j]] = uniq_char[i];
            i++;j--;
        }
        for(int i=0;i < n;i++) cout<<mp[c[i]];
        cout<<endl;
    }
    return 0;
}