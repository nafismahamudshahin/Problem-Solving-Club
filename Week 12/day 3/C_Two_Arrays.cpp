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
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(auto &i:a) cin>>i;
        for(auto &i:b) cin>>i;
        sort(all(a));
        sort(all(b));
        bool isPossible = true;
        for(int i=n-1;i>=0;i--){
            if(a[i]>b[i] || b[i] - a[i] > 1){
                isPossible = false;
                break;
            }
        }
        cout<<(isPossible?"YES":"NO")<<endl;
    }
    return 0;
}