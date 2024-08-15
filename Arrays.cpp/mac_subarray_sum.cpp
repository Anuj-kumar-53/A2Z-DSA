// code with even the subarray... n the sum>>>>>>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    int maxi = 0;
    int final =-1;
    int end =-1;
    int start =0;

    for(int i=0;i<n;i++){
        if(sum == 0 )  start = i; 
        sum += arr[i];
        if(sum>maxi){
            maxi = max(sum,maxi);
            final = start;
            end = i;
        }
        if(sum<0){
            sum = 0;
        }
    }
    cout<<sum<<endl;
    int sum1 = 0;
    for(int i=final;i<=end;i++){
        cout<<arr[i]<<" ";
        sum1+= arr[i];
    }
    cout<<sum1<<endl;
}
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum =0;
//     int maxi = 0;
    

//     for(int i=0;i<n;i++){
//         sum += arr[i];
//         if(sum>maxi){
//             maxi = max(sum,maxi);
//         }
//         if(sum<0){
//             sum = 0;
//         }
//     }
//     cout<<sum;
// }