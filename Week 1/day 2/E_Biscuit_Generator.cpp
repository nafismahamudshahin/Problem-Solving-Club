 #include <bits/stdc++.h>
 using namespace std;
 int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int a,b,t;
     cin>>a>>b>>t;
     int k = (t+0.5)/a;
     int total_biscuit = k*b;
     cout<<total_biscuit;
     return 0;
 }