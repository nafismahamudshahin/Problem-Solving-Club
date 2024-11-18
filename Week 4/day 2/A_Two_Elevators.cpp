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
        int a,b,c;
        cin>>a>>b>>c;
        ll f_Elevator_need_time = abs(a-1);
        ll s_Elevator_need_time = abs(b-c)+ abs(c-1);
        if(f_Elevator_need_time == s_Elevator_need_time){
            cout<<3<<endl;
        }else if(f_Elevator_need_time < s_Elevator_need_time){
            cout<<1<<endl;
        }else if(f_Elevator_need_time>s_Elevator_need_time){
            cout<<2<<endl;
        }
    }
    return 0;
}