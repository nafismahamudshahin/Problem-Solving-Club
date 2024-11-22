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
        string s,ans;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i+2] == '0' && s[i+3] != '0'){
                ans.push_back(96+stoi(s.substr(i,2)));
                i+=2;
            }else{
                ans.push_back(96+s[i]-'0');
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}