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
        bool flag = false;
        int l =0,r = n-1,max = n,min = 1;
        while(l<=r){
            if((v[r] == max && v[l] == min) || (v[r] == min && v[l] == max)){
                r--;l++;
                min++;
                max--;
            }else if(v[r] == max){
                r--;
                max--;
            }else if(v[r] == min){
                r--;min++;
            }else if(v[l] == max){
                l++;max--;
            }else if(v[l] == min){
                l++;
                min++;
            }else{
                cout<<l+1<<" "<<r+1<<endl;
                flag = true;
                break;
            }
        }
        if(flag == false)cout<<-1<<endl;
    }
    return 0;
}