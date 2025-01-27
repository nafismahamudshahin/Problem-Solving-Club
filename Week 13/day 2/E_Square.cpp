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
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        if(a2>b2)swap(a2,b2);
        if(a1>b1)swap(a1,b1);
        int aSum = a1+a2;
        if(aSum == b1 && aSum == b2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}