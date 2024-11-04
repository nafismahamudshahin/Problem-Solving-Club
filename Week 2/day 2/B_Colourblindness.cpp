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
        ll n,cnt= 0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool flag = true;
        while(cnt<n){
            if(s1[cnt] == s2[cnt])cnt++;
            else{
                if(s1[cnt] == 'R' && s1[cnt] != s2[cnt] || s2[cnt] == 'R' && s1[cnt] != s2[cnt] ){
                    cnt++;
                    flag = false;
                }else cnt++;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
        
    }
    return 0;
}
