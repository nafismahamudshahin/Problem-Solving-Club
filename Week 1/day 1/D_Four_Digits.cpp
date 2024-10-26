#include <bits/stdc++.h>
using namespace std;
int len(int n){
    int cnt =0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(len(n) == 4){
        cout<<n;
    }else if(len(n) == 3){
        cout<<"0"<<n;
    }else if(len(n) == 2){
        cout<<"00"<<n;
    }else if(len(n) == 1){
        cout<<"000"<<n;
    }else{
        cout<<"0000";
    }
    return 0;
}