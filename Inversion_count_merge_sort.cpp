
//
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<count;
}

/// not getting the required output.....
// int merge(int arr[],int low,int mid, int high){
 
//     vector<int> array;
//     int left = low;
//     int right  =  mid+1;
//     int cnt =0;
//     while(left <= mid && right<=high){
//         if(arr[left] <= arr[right]){
//             array.push_back(arr[left]);
//             left++;
//         }
//         else{
//             array.push_back(arr[right]);
//             int cnt = mid-left+1;
//             right++;
//         }
//     }
//     while(left<=mid){
//         array.push_back(arr[left]);
//             left++;

//     }
//     while(right<=high){
//         array.push_back(arr[right]);
//             right++;
//     }



//     for(int i= low;i<=high;i++){
//         arr[i] = array[i-low]; // transfeerring all the elements from vector to int array
//     }
//     return cnt;


   
// }
// int mergeSort(int arr[],int low,int high){
//     int cnt =0;
//     if(low >= high) return cnt;
//     int mid = (low + high)/ 2;
//     cnt += mergeSort(arr,low,mid);
//     cnt += mergeSort(arr,mid+1,high);
//     cnt += merge(arr,low,mid,high);
//     return cnt;

// }
// int print(int arr[],int n){
//    int cnt = mergeSort(arr,0,n-1);
//     return cnt;

// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
   
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//   print(arr,n);

// }