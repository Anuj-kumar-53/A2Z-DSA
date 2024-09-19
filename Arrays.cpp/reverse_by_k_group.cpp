#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cout<<"enter k to reverse : ";cin>>k;
    for(int i=0;i<n;i+=k){
        int left = i;
        int right = min(i+k-1,n-1); //this will detect the k elements..
        while(left< right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++,right--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}