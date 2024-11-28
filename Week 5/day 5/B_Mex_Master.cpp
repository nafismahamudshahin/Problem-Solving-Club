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
        int z = 0,other =0,minScore=0;
        while(n--){
            if(v[n] == 0) z++;
            else other++;
        }
        if(z ==0) minScore =0;
        else{
            if(other >= z-1) minScore =0;
            else{
                auto mx= max_element(all(v));
                if(*mx == 1) minScore = 2;
                else minScore = 1;
            }
        }
        cout<<minScore<<endl;
    }
    return 0;
}