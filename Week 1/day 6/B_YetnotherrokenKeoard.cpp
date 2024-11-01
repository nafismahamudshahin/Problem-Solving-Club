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
    while (t--){
        string s;
        cin>>s;
        int lowerCr=0;
        int upperCr=0;
        deque<char> dq;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='B'){
                upperCr++;
                continue;
            }else if(s[i]=='b'){
                lowerCr++;
                continue;
            }else if(lowerCr && islower(s[i])){
                lowerCr--;
                continue;
            }else if(upperCr && isupper(s[i])){
                upperCr--;
                continue;
            }
            dq.push_front(s[i]);
        }
        for(auto ch:dq){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}

