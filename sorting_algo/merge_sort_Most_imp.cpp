// not giving the correct output
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid, int high){
 
    vector<int> array;
    int left = low;
    int right  =  mid+1;
    while(left <= mid && right<=high){
        if(arr[left]<arr[right]){
            array.push_back(arr[left]);
            left++;
        }
        else{
            array.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        array.push_back(arr[left]);
            left++;

    }
    while(right<=high){
        array.push_back(arr[right]);
            right++;
    }



    for(int i= low;i<high;i++){
        arr[i] = array[i-low];
    }


    for(int i=low;i<high;i++){
        cout<<arr[i]<<" ";
    }
}
void divide(int arr[],int low,int high){
    if(low == high) return;
    int mid = low + high / 2;
    divide(arr,low,mid);
    divide(arr,mid+1,high);
    merge(arr,low,mid,high);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int low = 0;
    int high = n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    divide(arr,low,high);
}