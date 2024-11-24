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
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<char,int>mp;
        for(char i ='a';i<='z';i++) mp[i] = 0;
        for(auto val:v){
            char i = 'a';
            while(i<='z'){
                if(mp[i] == val){
                    cout<<i;
                    mp[i]++;
                    break;
                }
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}