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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int operationCnt =0,zero =0;
        for(int i=n-2;i>=0;i--){
            if(v[i]==0) zero++;
            else{
                operationCnt+=zero+v[i];
                zero =0;
            }
        }
        cout<<operationCnt<<endl;        
    }
    return 0;
}