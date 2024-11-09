#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int solve(){
    int n;
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    if(ch == 'g'){
        cout<<'0'<<endl;
        return 0;
    }
    int f=-1,result=0;
    for(int i=0;i<n;i++){
        if(s[i]=='g'){
            f=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            int cnt=0,flag=0;
            for(int j=i+1;j<n;j++){
                cnt++;
                if(s[j]=='g'){
                    flag++;
                    break;
                }
            }
            i=i+cnt;
            if(flag){
                result=max(result,cnt);
            }
            else{
                result=max(result,cnt+1+f);
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}