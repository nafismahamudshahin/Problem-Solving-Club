#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;cin>>n;
    vector<int>odd,even;
    for(int i=0;i<n;i++){
        int v;cin>>v;
        if(v%2==0)even.push_back(v);
        else odd.push_back(v);
    }
    sort(all(odd));
    sort(all(even));
    int oddSize = odd.size();
    int evenSize = even.size();
    if(abs(evenSize-oddSize) <=1) cout<<0;
    else{
        int sum =0,extra;
        if(oddSize > evenSize){
            extra = oddSize - evenSize-1;
            for(int i=0;i<extra;i++) sum+=odd[i];
        }else{
           extra = evenSize - oddSize-1;
           for(int i=0;i<extra;i++)  sum+=even[i];
        }
        cout<<sum;
    }
    return 0;
}