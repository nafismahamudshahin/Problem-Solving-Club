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
        int n,k;
        cin>>n>>k;
        int n_mod = n%2,k_mod = k%2;
        if(n>k || n_mod == 0 && k_mod == 1){
            cout<<"No"<<endl;            
        }else{
            n -=1;
            cout<<"Yes"<<endl;
            if(n_mod == 1){
                while(n--){
                    cout<<1<<" ";
                    k--;
                }
                cout<<k<<endl;
            }else{
                n -=1;
                while(n--){
                    cout<<1<<" ";
                    k--;
                }
                cout<<k/2<<" "<<k/2<<endl;
            }
        }
    }
    return 0;
}










// #include <bits/stdc++.h>
// using namespace std;
// #define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define all(x) x.begin(), x.end()
// #define ll long long int
// #define endl '\n'
// int main(){
//     fast;
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         if(n>k){
//             cout<<"NO"<<endl;
//             continue;
//         }
//         vector<int>ans(n+1);
//         int sum =0;
//         if(n%2 == 0 && k%2 == 0){
//             cout<<"Yes"<<endl;
//             for(int i=1;i<=n-2;i++){
//                 ans[i] = 1;
//                 sum++;
//             }
//             ans[n-1] = (k-sum)/2;
//             ans[n] = ans[n-1];
//         }else if(n%2 == 1 && k%2 == 0){
//             cout<<"Yes"<<endl;
//             for(int i=1;i<=n-1;i++){
//                 ans[i] = 1;
//                 sum++;
//             }
//             ans[n] = k-sum;
//         }else if(n%2 == 0 && k%2 == 1){
//             cout<<"No"<<endl;
//             continue;
//         }else if(n%2 == 1 && k%2 == 1){
//             cout<<"Yes"<<endl;
//             for(int i=1;i<=n-1;i++){
//                 ans[i] =1;
//                 sum++;
//             }
//             ans[n] = k-sum;
//         }
//         for(int i=1;i<=n;i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }