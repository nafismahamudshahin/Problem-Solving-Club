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
        vector<int>v;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            v.push_back(val);
        }
        string s;
        cin>>s;
        set<int> x,y;
        for(int i=0;i<n;i++){
            if(s[i] =='1'){
                x.insert(v[i]);
            }else{
                y.insert(v[i]);
            }
        }
        vector<int>rating(n+1,0);
        int curr = 1;
        while(!y.empty()){
            auto val = *y.begin();
            y.erase(y.begin());
            rating[val] = curr++;
        }
        while(!x.empty()){
            auto val = *x.begin();
            x.erase(x.begin());
            rating[val] = curr++;
        }
        for(int i=0;i<n;i++){
            cout<<rating[v[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}