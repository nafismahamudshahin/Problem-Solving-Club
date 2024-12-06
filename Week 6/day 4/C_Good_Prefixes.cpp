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
        ll n;cin>>n;
        vector<ll>v(n);
        ll goodPrefixArr =0,sum =0,maxElement =0;
        for(ll i =0;i<n;i++){
            cin>>v[i];
            maxElement = max(maxElement,v[i]);
            sum+= v[i];
            if(maxElement == sum-maxElement){
                goodPrefixArr++;
            }
        }
        cout<<goodPrefixArr<<endl;
    }
    return 0;
}