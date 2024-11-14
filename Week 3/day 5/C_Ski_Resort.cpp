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
        int n,k,m;
        cin>>n>>k>>m;
        vector<int>v(n);
        int p =0;
        ll temperature =0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] <= m) p++;
            else p = 0;
            temperature +=max(0,p-k+1);
        }
        cout<<temperature<<endl;
    }    
    return 0;
}