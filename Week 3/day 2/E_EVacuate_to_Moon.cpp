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
        ll cars = 0, outlets = 0,hours = 0;
        cin>>cars>>outlets>>hours;
        vector<ll>avv(cars,0),bvv(outlets,0);
        for(int i=0;i<cars;i++){
            cin>>avv[i];
        }
        sort(all(avv),greater<int>());
        for(int i=0;i<outlets;i++){
            cin>>bvv[i];
            bvv[i] *=hours;
        }
        sort(all(bvv),greater<int>());
        ll enargy =0, j = 0, l = min(cars,outlets);
        for(int i=0;i<l;i++){
            enargy+=min(avv[i],bvv[i]);
        }
        cout<<enargy<<endl;
    }
    return 0;
}