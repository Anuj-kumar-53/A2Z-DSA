#include<bits/stdc++.h>
using namespace std;
int party(vector<int>& arr,int low,int high){
    int pivot = arr[low];
    int i=low;
    int j= high;
    while(i<j){
        while(arr[i]<=pivot and i<high){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>& arr,int low, int high){
    if(low< high){
        int index = party(arr,low,high);
        // we will use the loop here to print iteration wise.....
    qs(arr,low,index-1);
    qs(arr,index+1,high);
    
    }
}
vector<int> quick_sort(vector<int>& arr){
    qs(arr,0,arr.size()-1);
    return arr;
}
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}