#include<bits/stdc++.h>
using namespace std;
//finding the max element in an array..
int findmax(int arr[],int n){
    int maxi = -1;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
long long findhrs(int arr[],int hours,int size){
    int total = 0;
    for(int i=0;i<size;i++){
        total += ceil((double)arr[i]/(double)hours);
    }
    return total;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hours;
    cout<<"enter the hour: ";
    cin>>hours;
    int low =1;
    int high = findmax(arr,n);
    int ans = high;
    while(low<=high){
        int mid = (low+high)/2;
        long long totalhours = findhrs(arr,mid,n);
        if(totalhours <= hours){
            ans = mid;
            high = mid -1;
        }
        else low = mid+1;
    }
    cout<<ans; //we can also return low...
    return 0;

}