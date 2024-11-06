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
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            for(int j=0;j<a;j++){
                char ch;
                cin>>ch;
                if(ch == 'D'){
                    if(v[i] == 9) v[i] = 0;
                    else v[i]++;
                }else if(ch == 'U'){
                    if(v[i] == 0) v[i] = 9;
                    else v[i]--;
                }
            }
        }
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}