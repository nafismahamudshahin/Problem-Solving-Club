#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<string>names;
    while(t--){
        string name;
        cin>>name;
        bool found = false;
        for(int i=0;i<names.size();i++){
            if(names[i] == name){
                found = true;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }else{
            names.push_back(name);
            cout<<"NO"<<endl;
        }
    }
    return 0;
}