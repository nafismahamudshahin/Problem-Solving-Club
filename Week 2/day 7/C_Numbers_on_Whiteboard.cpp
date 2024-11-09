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
        cout<<2<<endl;
        int a = n,b = n-1;
        for(int i=1;i<n;i++){
            cout<<a<<" "<<b<<endl;
            a = (a+b+1)/2;
            b--;
        }
    }
    return 0;
}