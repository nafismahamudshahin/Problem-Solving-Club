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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag = false;
        for(int i =0;i<n;i++){
            if(is_sorted(all(v))){
                flag = true;
                break;
            }
            ll first = v[0];
            for(int k =0;k<n-1;k++){
                v[k] = v[k+1];
            }
            v[n-1] = first;
        }
        cout<<(flag?"Yes":"No")<<endl;
    }
    return 0;
}