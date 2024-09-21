#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int index;cout<<"Index: ";cin>>index;
    // for(int i=index-1;i<n-1;i++){
    //     arr[i] = arr[i+1];
    // }


    int value;cout<<"value: ";cin>>value;
    //Removal by value..........
    int cnt=-1;
    for(int i=0;i<n;i++){
        if(arr[i] == value){
            cnt = i;
            break;
        }
    }
    if(cnt != -1){ 
    for(int i=cnt;i<n;i++){
        arr[i] = arr[i+1];
    }}

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }




}