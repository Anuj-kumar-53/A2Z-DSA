//here m is the no bukey to be form
//k is the no of consecutive element that is required to form one bukey..
#include<bits/stdc++.h>
using namespace std;
int ispossible(int arr[],int n,int m,int k,int day){
    int count =0;
    int bukey = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=day){
            //that means they will bloom
            count++;
            if(count == k){
                bukey++;
                count = 0;
            }
        }
        else{
            count =0;
        }

    }
    return bukey>=m;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i=0;i<n;i++){
        low = min(arr[i],low);
        high = max(arr[i],high);
    }
    int m;cout<<"the no of bukey";
    cin>>m;
    int k;
    cout<<"no of element in one bukey";
    cin>>k;
    if(m*k>n){ 

    cout<<"-1"; return 0;
    } 
    while(low<=high){
        int mid = (low+high)/2;
        if(ispossible(arr,n,m,k,mid)){
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<low;
    return 0;
}