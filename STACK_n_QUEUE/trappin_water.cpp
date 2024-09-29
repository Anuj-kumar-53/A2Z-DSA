//calulating the water stored between the elements if an array..
//the out is the total amount of water stored..
#include<bits/stdc++.h>
using namespace std;
int findTotal(int arr[],int n){
    int lmax =0,rmax = 0,total =0,l=0,r=n-1;
    while(l<r){
        if(arr[l]<=arr[r]){
            if(lmax>arr[l]) total += lmax - arr[l];
            else lmax = arr[l];
            l++;
        }
        else{
            if(rmax>arr[r]){
                total += rmax - arr[r];
            }
            else rmax = arr[r];
            r--;
        }

    }
    return total;

}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the total amount of water stored: "<<endl;
    cout<<findTotal(arr,n);
    return 0;
}