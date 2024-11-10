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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int min_val = INT_MAX;
        int a = v[n-3] - v[0];
        if(min_val>a) min_val = a;
        if(v[n-1]- v[2] < min_val) min_val = v[n-1]-v[2];
        if(v[n-2]- v[1] < min_val) min_val = v[n-2]-v[1];
        if(v[n-1]- v[2] < min_val) min_val = v[n-1]-v[2];
        cout<<min_val<<endl;
    }
    return 0;
}