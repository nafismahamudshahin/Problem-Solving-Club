#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.first == b.first ? a.second < b.second : a.first > b.first;
}
bool cmp2(pair<int,int>&a,pair<int,int>&b){
    return a.first == b.first ? a.second < b.second : a.first < b.first;
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({s[i]-'a'+1 , i+1});
        }
        if(s[0] > s[n-1]){
            sort(all(v),cmp);
        }else{
            sort(all(v),cmp2);
        }
        vector<int>ans;
        int totalCost =0,pre =0;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(v[i].second == n){
                for(int j= i+1;j<n;j++){
                    if(v[j-1].first == v[j].first){
                        auto temp = v[j-1];
                        v[j-1] = v[j];
                        v[j] = temp;
                        // swap(v[j-1],v[j]);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            auto p = v[i];
            if(p.second == 1){
                flag = true;
                pre = p.first;
                ans.push_back(p.second);
            }else if(flag){
                totalCost += abs(pre - p.first);
                pre = p.first;
                ans.push_back(p.second);
            }
            if(p.second == n){
                break;
            }
        }
        cout<<totalCost<<" "<<ans.size()<<endl;
		for(auto i : ans) cout<<i<<" ";
		cout<<endl;
    }
    return 0;
}