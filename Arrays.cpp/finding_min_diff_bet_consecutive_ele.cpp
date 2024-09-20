#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //so we find the min difference between two consecutive elements..
    //in unsorted array we will get negatives so we will sort the array first
    // sort(arr,arr+n);
    // used insertion sort
    for(int i=0;i<n;i++){
       int j=i;
        while(j>0 and arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        int diff = arr[i+1] - arr[i];
        mini = min(mini,diff);
    }
    cout<<mini;
}