#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
const int N = (1LL << 15);
vector<int>palindrome;
bool isPalindrome(int n){
    string s = to_string(n);
    int len = s.length();
    for(int i=0;i<len/2;i++){
        if(s[i] != s[len-i-1]) return false;
    }
    return true;
}
void markPalindrome(){
    for(int i=0;i<N;i++){
        if(isPalindrome(i)) palindrome.push_back(i);
    }
}
int main(){
    fast;
    markPalindrome();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n),cnt(N+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt[v[i]]++;
        }
        ll ans = n;
        for(int i=0;i<n;i++){
            for(int j=0;j<palindrome.size();j++){
                int cur =(v[i] ^palindrome[j]);
                ans+=cnt[cur];
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}