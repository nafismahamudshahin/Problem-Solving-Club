#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t; cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int m = a.size(), n = b.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        int max_len = 0;
        for(int i = 1; i <= m; i++)
            for(int j = 1; j <= n; j++)
                if(a[i-1] == b[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                    max_len = max(max_len, dp[i][j]);
                }
        int ans = (m - max_len) + (n - max_len);
        cout<<ans<<endl;
    }
    return 0;
}
