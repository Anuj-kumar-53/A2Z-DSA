//we are doing usig binary search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cout<<"the position in which u want the missing element";
    cin>>k;
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = arr[mid] - (mid+1);
        if(missing<k) low = mid+1;
        else high = mid-1;
    }
    cout<<low+k; //we can also do high+k+1..
    return 0;
}