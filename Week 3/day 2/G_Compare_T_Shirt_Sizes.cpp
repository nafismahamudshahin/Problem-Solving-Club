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
        string a,b;
        cin>>a>>b;

        char last_a = a.back();
        char last_b = b.back();
        if(last_a != last_b){
            if(last_a == 'S')cout<<"<"<<endl;
            else if(last_a == 'M'){
                if(last_b == 'L'){
                    cout<<'<'<<endl;
                }else cout<<'>'<<endl;
            }else cout<<'>'<<endl;
        }else{
            int cnt_a = count(a.begin(),a.end(),'X');
            int cnt_b = count(b.begin(),b.end(),'X');
            
            if(last_a == 'S'){
                if(cnt_a < cnt_b)cout<<'>'<<endl;
                else if(cnt_a>cnt_b)cout<<'<'<<endl;
                else cout<<'='<<endl;

            }else if(last_a == 'L'){
                if(cnt_a > cnt_b)cout<<'>'<<endl;
                else if(cnt_a < cnt_b)cout<<'<'<<endl;
                else cout<<'='<<endl;

            }else{
                cout<<'='<<endl;
            }
        }

    }
    return 0;
}