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
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>v(n,vector<ll>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int x,y;
        ll ans =0,sum;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                sum = v[i][j];
                x = j-1;
                y = j+1;
                for(int k =i-1;k>=0;k--){
                    if(x >= 0){
                        sum+=v[k][x];
                        x--;
                    }
                    if(y<m){
                        sum+=v[k][y];
                        y++;
                    }
                }
                x = j-1;
                y = j+1;
                for(int k = i+1;k<n;k++){
                    if(x>=0){
                        sum+=v[k][x];
                        x--;
                    }
                    if(y<m){
                        sum+=v[k][y];
                        y++;
                    }
                }
                if(sum>ans)ans= sum;
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


