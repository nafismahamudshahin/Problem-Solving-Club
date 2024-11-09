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
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>teacher;
        for(int i=0;i<m;i++){
            int val;
            cin>>val;
            teacher.push_back(val);
        }
        sort(teacher.begin(),teacher.end());
        while(q--){
            int david;
            cin>>david;
            if(david< teacher[0]){
                cout<<teacher[0]-1<<endl;
                continue;
            }
            if(david > teacher[m-1]){
                cout<<n - teacher[m-1]<<endl;
                continue;
            }
            auto it = lower_bound(teacher.begin(),teacher.end(),david);
            auto jt = it;
            jt--;
            int l = *jt,right = *it;
            int mid = (right+l)/2;
            cout<<min(abs(mid - 1), abs(mid - right))<<endl; 
        }
    }
    return 0;
}
