// using Dectch National Flag Algorithm....
/* 0 to low-1 are zeros(0)
low to mid are ones(1);
mid+1 to high-1 are unsorted
n high to n-1 are twos(2)
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    cout<<"enter only zeros n ones";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0;
    int mid = 0; //becasue everything is unsorted in the begining;
    int high =  n-1;
    while(mid<=high){ 
    if(arr[mid] == 0){
        swap(arr[low],arr[mid]);
        low++;mid++;
    }
    else if(arr[mid] == 1){
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;
    }}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}