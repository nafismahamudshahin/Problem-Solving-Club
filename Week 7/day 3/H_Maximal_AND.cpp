#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
const int B = 30;
int main(){
    fast;
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        vector<int>bits(B+1);
        for(int i=0;i<n;i++){
            for(int j =B;j>=0;j--){
                if((v[i] >> j) & 1) bits[j]++;
            }
        }
        int ans =0;
        for(int j=B;j>=0;j--){
            if(bits[j] == n) ans +=(1LL << j);
            else{
                int need  = n-bits[j];
                if(m>= need){
                    ans += (1LL << j);
                    m -= need;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}