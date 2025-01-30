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
        int n;cin>>n;
        vector<int>v(n);
        for(auto &i:v)cin>>i;
        if(is_sorted(all(v))){
            cout<<"YES"<<endl;
            continue;
        }
        vector<int>a,b,c;
        int k = v[0];
        int cnt =0;
        for(auto i:v){
            if(i >=k){
                cnt++;
                a.push_back(i);
            }else break;
        }
        for(int i=cnt;i<n;i++) b.push_back(v[i]);  
        for(auto i:b) c.push_back(i);
        for(auto i:a) c.push_back(i);
        cout<<(is_sorted(all(c))?"YES":"NO")<<endl;
    }
    return 0;
}