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
        int n,m;
        cin>>n>>m;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            mp[a].insert(i);
        }
        for(int i=1;i<=m;i++){
            int l,r;
            cin>>l>>r;
            if(mp.find(l) == mp.end() || mp.find(r) == mp.end()){
                cout<<"NO"<<endl;
            }else{
                int leftMostIdx , rightMostIdx;
                leftMostIdx = *mp[l].begin();
                rightMostIdx = *mp[r].rbegin();
                if(leftMostIdx < rightMostIdx){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
