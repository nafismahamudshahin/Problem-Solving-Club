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
    vector<string>allMessages;
    map<string,bool>mp;
   for(int i=0;i<t;i++){
        string messages;
        cin>>messages;
        allMessages.push_back(messages);
    }
    for(int i=t-1;i>=0;i--){
        if(mp[allMessages[i]] != true){
            cout<<allMessages[i]<<endl;
            mp[allMessages[i]] = true;
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
//     queue<string>q;
//     while(t--){
//         string messages;
//         cin>>messages;
//         if(q.empty()){
//             q.push(messages);
//         }else{
//             queue<string>copy;
//             while(!q.empty()){
//                 if(q.front() != messages){
//                     copy.push(q.front());
//                 }
//                 q.pop();
//             }
//             while(!copy.empty()){
//                 q.push(copy.front());
//                 copy.pop();
//             }
//             q.push(messages);
//         }
//     }
//     stack<string>st;
//     while(!q.empty()){
//         st.push(q.front());
//         q.pop();
//     }
//     while(!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }