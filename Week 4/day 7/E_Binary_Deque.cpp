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
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        int total_sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            total_sum+=v[i];
        }
        if(m>total_sum){
            cout<<-1<<endl;
            continue;
        }

        int sum =0,ans =0,l =0,r =0;
        while(sum < m){
            sum+=v[l];
            l++;
        }
        while(l<n && v[l] == 0) l++;
        ans = l;
        while(l<n){
            if(v[l] == 0){
                ans = max(ans,l-r+1);
            }else{
                while(v[r] != 1){
                    r++;
                }
                r++;
                ans = max(ans,l-r+1);
            }
            l++;
        }
        cout<<n-ans<<endl;
    }
    return 0;
}
