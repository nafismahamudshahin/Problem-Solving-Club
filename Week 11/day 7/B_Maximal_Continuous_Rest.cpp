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
    for(int i=0;i<n;i++) cin>>v[i];
    int cnt=0,maximal=0;
    for(int i=0;i<n;i++){
        while(v[i%n]==1){
            cnt++;i++;
        }
        maximal = max(cnt,maximal);
        cnt=0;
    }
    cout<<maximal<<endl;
    return 0;
}