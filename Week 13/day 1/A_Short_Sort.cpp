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
        if(s[0] =='a' && s[1] == 'b'){
            cout<<"YES"<<endl;
        }else{
            if(s[0]=='a')swap(s[1],s[2]);
            else if(s[0] == 'b') swap(s[0],s[1]);
            else if(s[0] =='c') swap(s[0],s[2]);
        
            if(s[0] =='a' && s[1] == 'b') cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}