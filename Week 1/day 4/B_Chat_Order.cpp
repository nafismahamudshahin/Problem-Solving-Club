#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<string>s;
    while(n--){
        string a;
        cin>>a;
        s.insert(a);
    }
    for(auto i:s){
        cout<<i<<endl;
    }
    return 0;
}
// not solved