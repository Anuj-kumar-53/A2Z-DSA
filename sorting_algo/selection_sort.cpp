#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini])
            mini = j;
        }
        // swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]= temp;
    }
}
// selection sort bring the minimum at the first n then step by step..
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}