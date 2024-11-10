#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int x,y,z;
    cin>>x>>y>>z;
    int total_round = x+y+z;
    float my_point = (x*1) + (y*0.5);
    float opponent_point = (z*1) + (y*0.5);
    float max_possible_point = my_point+(4 - total_round);
    if(max_possible_point > opponent_point) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}