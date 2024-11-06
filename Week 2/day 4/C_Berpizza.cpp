#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t,sereal=1;
    cin>>t;

    set<pair<int,int>> st;
    multiset<pair<int,int>> ml;
    vector<int>v;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        if(n == 1){
            int taka;
            cin>>taka;
            st.insert({sereal,taka});
            ml.insert({taka,-sereal});
            sereal++;
        }else if(n == 2){
            int pos = st.begin()->first;
            int taka = st.begin()->second;
            v.push_back(pos);
            st.erase(st.begin());
            ml.erase({taka,pos});
        }else{
            int pos = -ml.rbegin()->second;
            int taka = ml.rbegin()->first;
            v.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos,taka});
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

/*
    for (int i = 1; i <= n; i++)
    {
        int t; cin >> t;
        if(t == 1)
        {
            int money; cin >> money;
            s.insert({customerNo,money});
            ml.insert({money, -customerNo});
            customerNo++;
        }
        else if(t == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }

    for(auto value : ans)
    {
        cout << value << " ";
    }
    cout << nl;
    

    return 0;
}

*/