//optimal using has-map
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int any;
    cout<<"the no u want xor of";
    cin>>any;
    int count =0;
    int xr =0;
    map<int,int> mpp;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr = xr ^ arr[i];
        int x= xr^any;
        count += mpp[x];
        mpp[xr]++;
    }
    cout<<count;
}






//_____this is bettter solution because the time complexcity is o(n^2)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int any;
//     cout<<"the no u want xor of";
//     cin>>any;
//     int count =0;
//     int xr = 0;
//     for(int i=0;i<n;i++){
//         xr =0;
//         for(int j=i;j<n;j++){
//             xr = xr^arr[j];
//             if(xr == any){
//                 count +=1;
//             }
//         }
//     }
//     cout<<count;
// }