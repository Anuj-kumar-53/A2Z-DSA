#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int n,int k){
    int low =0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
        cout<<"element found at index: "<< mid;
        break;
        } 
        if(arr[mid]>= arr[low]){ 
            if(arr[low]<= k and arr[mid]>= k){
                high = mid-1;
        }
        else low = mid+1;
            
        }else{
            if(arr[mid]<= k and arr[high]>=k){
                low = mid+1;
            }else high = mid-1;
        }
    }

}
void rotate(int arr[],int n){
    int d= n/2;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    cout<<"here is the sorted rotated array"<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // now implemetnting merge sort.
    int any;cout<<"enter the value to be searched now"<<"\n";
    cin>>any;
    merge(arr,n,any);

}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,n);
}