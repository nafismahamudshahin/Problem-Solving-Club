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
        cin>>n;
        vector<int>v(n),prefix_sum(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        } 
        string s;
        cin>>s;
        prefix_sum[0] = v[0];
        for(int i=1;i<n;i++){
            prefix_sum[i] = prefix_sum[i-1]+v[i];
        }
        int r = n-1;
        int ans =0;
        for(int l=0;l<n;l++){
            if(s[l] == 'L'){
                while(r > l && s[r] != 'R') r--;
                    if( r > l && l > 0){
                        ans+= prefix_sum[r] - prefix_sum[l-1];
                        r--;
                    }else if(r>l){
                        ans+= prefix_sum[r] - 0;
                        r--;
                    }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}