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
        int n,minCnt=0;string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
            if(s[i] != '#'){
                int cnt =0;
                while(i<n && s[i] != '#') cnt++,i++;
                if(cnt>2){
                    minCnt =2;
                    break;
                }else minCnt+=cnt;
                i--;
            }
        cout<<minCnt<<endl;
    }
    return 0;
}