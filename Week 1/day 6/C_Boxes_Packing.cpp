#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;
    cin>>n;
    vector<int>v;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        freq[a]++;
    }
    int ans =INT_MIN;
    for(auto [key,val]:freq){
        if(val>ans){
            ans = val;
        }
    }
    cout<<ans;
    return 0;
}