#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    ll total_sum = 0;
    ll smallOdd =INT_MAX;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        v.push_back(val);
        total_sum+=val;
        if(val%2 != 0){
            if(smallOdd>val){
                smallOdd = val;
            }
        }
    }
    if(total_sum%2 == 0){
        cout<<total_sum;
    }else{
        cout<<total_sum-smallOdd;
    }
    return 0;
}