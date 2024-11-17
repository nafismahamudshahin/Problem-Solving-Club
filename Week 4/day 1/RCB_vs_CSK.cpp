#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int rcb,csk;
    cin>>rcb>>csk;
    if(rcb>csk){
        int a = rcb - csk;
        if(a >=18){
            cout<<"RCB";
        }else{
            cout<<"CSK";
        }
    }else{
        cout<<"CSK";
    }

    return 0;
}