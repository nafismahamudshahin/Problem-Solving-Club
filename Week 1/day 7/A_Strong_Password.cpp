#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int typing_time(string s){
    int time =2;
    for(int i =1;i<s.size();i++){
        if(s[i] == s[i-1]){
            time+=1;
        }else{
            time+=2;
        }
    }
    return time;
}
int main(){
    fast;
    int t;
    cin>>t;
    vector<string>v;
    while(t--){
        string s;
        cin>>s;
        string best_pass = s;
        int maxTime = typing_time(s);
        for(char letter ='a';letter<='z';letter++){
            for(int i=0;i<=s.size();i++){
                string newPass = s.substr(0,i) + letter + s.substr(i);
                int currTime = typing_time(newPass);
                if(currTime > maxTime){
                    maxTime = currTime;
                    best_pass  = newPass;
                }
            }
        }
        v.push_back(best_pass);
    }
    for(auto i:v){
        cout<<i<<endl;
    }
    return 0;
}