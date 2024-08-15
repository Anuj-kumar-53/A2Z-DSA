// buy n sell of stock....
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cost =0;
    int profit =0;
    int mini = arr[0];
    for(int i=1;i<n;i++){
        cost = arr[i] - mini;
        profit  = max(cost,profit);
        mini = min(mini,arr[i]);
    }
    cout<<profit;
}