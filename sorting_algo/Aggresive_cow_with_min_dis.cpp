//min distance with max difference
//firstly have to fit all the cows....
#include<bits/stdc++.h>
using namespace std;
bool canweplace(int arr[],int n,int distance,int cows){
    int placedcow =1,last = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-last>= distance){
            placedcow++;
            last = arr[i];
        }
    }
    return placedcow>=cows;

}
int main(){
int n;cin>>n;
int arr[n];
cout<<"enter the array in sorted form";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int low = arr[0],high = arr[n-1] - arr[0];
int cows;
cout<<"enter how many cows u want to place..";
cin>>cows;
int ans;
while(low<= high){
    int mid = (low+high)/2;
    if(canweplace(arr,n,mid,cows) == true){
        ans = mid;
        low = mid+1;
    }
    else high = mid-1;
}

cout<<ans;
return 0;

}