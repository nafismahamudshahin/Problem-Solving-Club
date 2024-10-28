#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int btn_a = a+(a-1);
    int btn_b = b+(b-1);
    int click_both_btn = a+b;
    if(btn_a>btn_b && btn_a>click_both_btn){
        cout<<btn_a;
    }else if(btn_b>click_both_btn){
        cout<<btn_b;
    }else{
        cout<<click_both_btn;
    }
    return 0;
}
