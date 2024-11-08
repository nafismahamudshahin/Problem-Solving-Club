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
        priority_queue<int>b_deck;
        ll total_power =0;
        for(auto i:v){
            if(i>0){
                b_deck.push(i);
            }else if(i == 0 && !b_deck.empty()){
                total_power+=b_deck.top();
                b_deck.pop();
            }
        }
        cout<<total_power<<endl;
    }
    return 0;
}