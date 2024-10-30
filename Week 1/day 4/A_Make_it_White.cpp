#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int s_idx = 0,e_idx =0;
        for(int i=0;i<n;i++){
            if(s[i] == 'B'){
                s_idx = i+1;
                break;
            }
        }
        for(int i =n-1;i>0;i--){
            if(s[i] == 'B'){
                e_idx = i+1;
                break;
            }
        }
        int cnt=0;
        for(int i=s_idx;i<=e_idx;i++){
            cnt++;
        }
        if(cnt==0)cnt=1;
        cout<<cnt<<endl;
    }
    return 0;
}