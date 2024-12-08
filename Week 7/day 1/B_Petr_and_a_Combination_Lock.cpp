#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag = false;
    for(int mask =0;mask <(1<<n);mask++){
        int sum =0;
        for(int i =0;i<n;i++){
            if((mask>>i) & 1) sum += v[i];
            else sum -= v[i];
        }
        if(sum%360 == 0){
            flag = true;
            break;
        }
    }
    cout<<(flag?"YES":"NO")<<endl;
    return 0;
}