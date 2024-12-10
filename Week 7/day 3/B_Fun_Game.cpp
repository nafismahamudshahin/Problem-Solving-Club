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
        int n;
        string s,v;
        cin>>n>>s>>v;
        if(s==v){
            cout<<"YES"<<endl;
            continue;
        }
        int pos =-1;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                pos =i;
                break;
            }
        }
        if(pos != -1){
            bool flag = true;
            for(int i=0;i<n;i++){
                if(s[i] != v[i] && pos>i){
                    flag = false;
                    break;
                }
            }
            cout<<(flag?"YES":"NO")<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}