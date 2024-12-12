#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m+1);
    for(int i=0;i<m+1;i++) cin>>a[i];
    int totalFnd =0;
    for(int i=0;i<m;i++){
        int cnt =0;
        for(int j=0;j<n;j++) if(((a[m] >> j) & 1) != ((a[i]>>j) & 1)) cnt++;   
        if(cnt<=k) totalFnd++;
    }
    cout<<totalFnd<<endl;
    return 0;
}