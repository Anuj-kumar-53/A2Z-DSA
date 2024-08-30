//with log2n complexcity
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n ==1){
     cout<<0; return 0;

    }
    if(arr[0]>arr[1]){
        cout<<0;return 0;
    }
    if(arr[n-1]>arr[n-2]){
        cout<<n-1;return 0;
    }
    int low =0;
    int high = n-2;
    while(high>=low){
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1]){
            cout<<"index: "<<mid;return 0;
        }
        else if(arr[mid]>arr[mid-1]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}