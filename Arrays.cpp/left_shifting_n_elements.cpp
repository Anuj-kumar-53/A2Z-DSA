#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n){
    // simple form just by reversing the array;
    int d = n/2;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    // int k; cin>>k;
    // int temp[k];
    // for(int i=0;i<k;i++){
    //     temp[i] = arr[n-k+i];
    // }
    // for(int i=n-1;i>=k;i--){
    //     arr[i]=arr[i-k];
    // }
    // for(int i=0;i<k;i++){
    //     arr[i] = temp[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    rotate(arr,n);
}