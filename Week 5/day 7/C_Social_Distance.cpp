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
        int n,m;
        string s;
        cin>>n>>m>>s;
        int i =0,j =0;
        ll count=0,ans=0;
        int flag = 0;
        while(i<n && j<n){
            if(s[j] != '0'){
                if(flag) ans+=((count-m)/(m+1));
                else ans+=(count/(m+1));
                i =j;
                count =0;
                flag = 1;
            }else count++;
            j++;
        }
        flag?ans+=count/(m+1):ans+=((count-1)/(m+1))+1;
        cout<<ans<<endl;
    }
    return 0;
}
