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
    multiset<int>ml;
    int cnt =0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ml.insert(a);
    }
    int ans =0;
    int problems = 1;
    while(!ml.empty()){
        auto lb = ml.lower_bound(problems);
        if(lb != ml.end()){
            ans++;
            ml.erase(lb);
        }else{
            break;
        }
        problems++;
    }
    cout<<ans;
    return 0;
}
