#include<bits/stdc++.h>
using namespace std;
// Bubble sosrt compares the adjacent elements n take the greatest at the last...   
void bubble_sort(int arr[],int n){
    for(int j=0;j<n-1;j++){ 
    for(int i=0;i<n-1-j;i++){
        if(arr[i]>arr[i+1]){  
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        }
    }
    }
}
int main(){
      int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}