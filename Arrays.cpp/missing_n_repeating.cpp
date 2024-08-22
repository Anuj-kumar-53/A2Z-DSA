#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int has[n] = {0};int repet =-1,missing = -1;
    for(int i=1;i<n;i++){
        has[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(has[i]==2) repet = i;
        else if(has[i] == 0) missing =i;
        if(repet != -1 and missing != -1){
            break;
        }
    }
    cout<<repet<<" "<<missing;
}
// we can do this using two forloops also..
// here the time complexcity is more..
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//       int n;cin>>n;int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int r = -1; int m = -1;
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=0;j<n;j++){
//             if(arr[j] == i){
//                 count++;
//             }
//         }
//         if(count ==2) r = i;
//         else if(count == 0) m =i;
//         else if(r != -1 and m != -1 ) break;
//     }
//     cout<<r<<" "<<m;
// }