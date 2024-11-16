#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,m;
    cin>>n>>m;
    vector<int>v(n),v2(m);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<m;i++)cin>>v2[i];

    int i =0,j =0;
    ll t_pair = 0;
    while(i<n && j<m){
        if(v[i] == v2[j]){
            int a =0,b =0;
            int val = v[i];
            while(i<n && v[i] == val){
                a++;i++;
            }
            while(j<m && v2[j] == val){
                b++;j++;
            }
            t_pair +=(ll)a*b;
        }else if(v[i] < v2[j]) i++;
        else j++;
    }
    cout<<t_pair;
    return 0;
}