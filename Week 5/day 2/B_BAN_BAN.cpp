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
        int l = 2,r = 3*n,stepCnt =0;
        vector<int>ans;
        while(l<r){
            ans.push_back(l);
            ans.push_back(r);
            stepCnt++;
            l+=3,r-=3;
        }
        cout<<stepCnt<<endl;
        for(auto i:ans) cout<<i<<" ";   
        cout<<endl;
    }
    return 0;
}