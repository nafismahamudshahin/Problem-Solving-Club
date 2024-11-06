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
        int n,k;
        string s;
        cin>>n>>k>>s;
        int freq[26] ={0};
        for(char i:s){
            freq[i-'a']++;
        }
        int ans =0;
        for(char c:s){
            if(freq[c-'a'] % 2 == 1){
                ans++;
                freq[c-'a'] = 0;
            }
        }
        if(ans<=k+1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}