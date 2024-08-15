#include<bits/stdc++.h>
using namespace std;
// optimal solution is abit tough...
int main(){
      int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"put value";
    int k;
    cin>>k;
    int count = 0;int presum =0;
    map<int,int> mpp;
    mpp[0] = 1;
    for(int i=0;i<n;i++){
        presum += arr[i];
        int remove = presum -k;
        count = mpp[remove];
        mpp[presum] += 1;
        
    }
    cout<<count;


}












//better solution... to count how many times k apppers in a consecutive sequence..
// int main(){
    // int n;cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"put value";
    // int k;
    // cin>>k;
    // int count = 0;
//     for(int i=0;i<n;i++){
//         int sum =0;
//         for(int j=i;j<n;j++){
//             sum += arr[j];
//         if(sum ==k){
//             count++;
//         }
//         }

//     }
//     cout<<count;
// }