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
        ll n;cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<ll>even,odd;
        for(auto i:v){
            if(i%2 == 0) even.push_back(i);
            else odd.push_back(i);
        }
        if(odd.size() == 0 || even.size() == 0){
            cout<<'0'<<endl;
            continue;
        }
        sort(all(odd));
        sort(all(even));
        ll maxOddNumber = odd.back();
        int flag = false;
        for(int i:even){
            if(i>maxOddNumber){
                flag = true;
                break;
            }
            maxOddNumber+=i;
        }
        cout<<(flag?even.size()+1:even.size())<<endl;
    }
    return 0;
}