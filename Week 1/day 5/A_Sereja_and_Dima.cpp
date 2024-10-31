#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;
    cin>>n;
    deque<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sereja = 0,dima=0,who = 1;
    while(!v.empty()){
        int left = v.front();
        int right = v.back();
        int mx = max(left,right);
        if(who%2 == 0){
            sereja+=mx;
        }else{
            dima+=mx;
        }
        if(mx == left){
            v.pop_front();
        }else{
            v.pop_back();
        }
        who++;
    }
    cout<<dima<<" "<<sereja;
    return 0;
}