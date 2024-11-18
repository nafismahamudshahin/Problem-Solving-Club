#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.rbegin(), x.rend()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        ll total_time = b;
        for(int i=0;i<n;i++){
            if(v[i]>=a-1) total_time += a-1;
            else total_time += v[i];
        }
        cout<<total_time<<endl;
    }
    return 0;
}