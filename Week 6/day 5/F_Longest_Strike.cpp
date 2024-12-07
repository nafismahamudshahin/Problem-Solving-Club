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
        int n,m;cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<int,int>mp;
        for(int i=0;i<n;i++) mp[v[i]]++;
        int L =-1,r=-1,R =0,l=0;
        for(auto i:mp){
            if(i.second >= m)
                if(l ==0){
                    L=i.first;
                    l++;
                }else
                    if(L+l == i.first) l++;
                    else{
                        if(l>R){
                            R = l;
                            r = L;
                        }
                        l =1;
                        L =i.first;
                    }
            else
                if(l>R){
                    R=l;
                    r = L;
                }
        }
        if(l>R){
            R = l;
            r =L;
        }
        if(r == -1) cout<<-1<<endl;
        else cout<<r<<" "<<r+R-1<<endl;
    }
    return 0;
}