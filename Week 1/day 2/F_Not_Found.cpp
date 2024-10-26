#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int frq[26]={0};
    for(int j=0;j<s.length();j++){
        int val = s[j];
        frq[val-97]++;
    }
    string missing_char = "None";
    for(int i=0;i<26;i++){
       if(frq[i] ==0){
            missing_char = i+97;
            break;
       }
    }
    cout<<missing_char;
    return 0;
}