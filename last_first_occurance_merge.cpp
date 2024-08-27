#include<bits/stdc++.h>
using namespace std;
int fn(int arr[],int n,int target){
    int low = 0,high  = n-1,first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            first = mid;
            high = mid -1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else 
            high = mid -1;
    }
    return first;

}
int fnl(int arr[],int n,int target){
    int low = 0,high  = n-1,last = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            last = mid;
            low = mid +1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else 
            high = mid -1;
    }
    return last;

}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int first = fn(arr,n,target);
    if(first == -1) cout<<"no value found";
    int last = fnl(arr,n,target);
    cout<<first<<"\n"<<last;
    
}