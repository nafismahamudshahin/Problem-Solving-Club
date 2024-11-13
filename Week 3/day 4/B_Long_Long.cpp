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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt =0,k =0,m =0;
        bool flag = 0;
        for(int i=0;i<n;i++){
            cnt+=abs(v[i]);
            if(v[i]<0){
                k++;
                flag = 1;
            }else if(v[i] == 0 && flag) k++;
            else{
                if(k!=0)m++;
                k = 0;
                flag = 0;
            }
        }
        if(k != 0)m+=1;
        cout<<cnt<<" "<<m<<endl;

    }
    return 0;
}