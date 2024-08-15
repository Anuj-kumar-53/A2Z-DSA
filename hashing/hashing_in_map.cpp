#include<bits/stdc++.h>
using namespace std;
int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //pre_connection
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]+=1;
//     }
//     // printing the map
//     for(auto kun:mpp){
//         cout<<kun.first<<"-"<<kun.second<<endl;
//     }


//     //fetch their occurances in the array..
//     int q;
//     cin>>q;
//     while(q--){
//         int num;
//         cin>>num;
//         cout<<mpp[num]<<endl;
//     }

    // map in strings....
    string s;
    cin>>s;
    map<char,int>mpps;
    for(int i=0;i<s.size();i++){
        mpps[s[i]]++;
    }
    //fetch
    int w;
    cin>>w;
    while(w--){
        char c;
        cin>>c;
        cout<<mpps[c]<<endl;
    }

    // now we r fetching the string map...
    for(auto can: mpps){
        cout<<can.first<<"-"<<can.second<<endl;
    }


}