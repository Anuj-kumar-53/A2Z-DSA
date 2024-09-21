#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index;cout<<"Index: ";cin>>index;
    int value;cout<<"value: ";cin>>value;
    for(int i=n-1;i>= index-1;i--){
        arr[i+1] = arr[i];
    }
    arr[index-1] = value;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}