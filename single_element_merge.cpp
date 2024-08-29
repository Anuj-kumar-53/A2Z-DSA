//finding out the single element....
//arr[]={1 1 2 2 3 3 4 5 5 6 6}.
//.. so the output should be the single elment that is 4;
// the input array should be sorted...
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){

     cout<<arr[0];
     return 0; 
    }
    if(arr[0] != arr[1]){
        cout<<arr[0];
        return 0;
    }
    if(arr[n-1] != arr[n-2]){
        cout<<arr[n-1];
        return 0;
    }
    int low=1,high = n-2;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid] != arr[mid-1] and arr[mid] != arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        if((mid%2 ==0 and arr[mid] == arr[mid+1]) or (mid%2 == 1 and arr[mid]== arr[mid-1])){
            low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
    }
}