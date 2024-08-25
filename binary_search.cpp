// binary search works only on the sorted array....
#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int low,int high,int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target){
       return  fun(arr,low,mid-1,target);
    }
    else{
       return  fun(arr,mid+1,high,target);
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    int target;
    cout<<"enter value to be search";
    cin>>target;
    //by recursion function
   int result= fun(arr,low,high,target);
    cout<<result;

//by loops
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid] == target) {cout<< mid; return 0;}
//         else if(arr[mid]> target) high = mid -1;
//         else low = mid+1;
//     }
// return -1;
}