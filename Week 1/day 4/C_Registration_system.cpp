#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<string>dataBase;
    vector<map<string,int>> frq;
    while(t--){
        string newUser;
        cin>>newUser;
        int idx = -1;
        bool preUser = false;
        for(int i=0;i<dataBase.size();i++){
            if(dataBase[i] == newUser){
                idx = i;
                preUser = true;
            }
        }

        if(preUser){
            frq[idx][newUser]++;
            cout<<newUser<<frq[idx][newUser]<<endl;
        }else{
            cout<<"OK"<<endl;
            dataBase.push_back(newUser);
            map<string,int>mp;
            mp[newUser] = 0;
            frq.push_back(mp);
        }

    }
    return 0;
}