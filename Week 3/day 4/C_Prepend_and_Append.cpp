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
        string s;
        cin>>n>>s;
        ll k = n;
        int start = 0;
        int end = n-1;
        while(start<end){
            if(s[start] != s[end]){
                start++;
                end--;
                k-=2;
            }else break;
        }
        cout<<k<<endl;
    }
    return 0;
}