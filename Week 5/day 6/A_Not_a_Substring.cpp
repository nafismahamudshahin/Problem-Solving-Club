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
        string s,ans;
        cin>>s;
        int sz = s.length();
        if(s == "()"){
            cout<<"NO"<<endl;
            continue;
        }
        int flag = 0;
        for(int i=0;i<sz-1;i++){
            if(s[i] == '(' && s[i+1] == '(' || s[i] == ')' && s[i+1] == ')'){
                flag = 1;
            }
        }
        if(flag){
            for(int i=0;i<sz;i++){
                ans.push_back('(');
                ans.push_back(')');
            }
        }else{
            for(int i=0;i<sz;i++){
                ans.push_back('(');
            }
            for(int i=0;i<sz;i++){
                ans.push_back(')');
            }
        }
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
    return 0;
}