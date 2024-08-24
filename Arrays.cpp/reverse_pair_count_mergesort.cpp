#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void mer(int arr[],int low,int mid,int high){
    int left = low;
    int right = mid+1;
    vector<int>ansA;
  while(left<= mid and right<= high){
    if(arr[left]<=arr[right]){
        ansA.push_back(arr[left]);
        left++;
        }
        else{
            ansA.push_back(arr[right]);
            right++;
        }
  }
        while(left<=mid){
            ansA.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            ansA.push_back(arr[right]);
            right++;
        }
for(int i= low;i<=high;i++){
    arr[i] = ansA[i-low];
}

}
void countPairs(int arr[],int low,int mid,int high){
    int right = mid+1;
    for(int i=low;i<=mid;i++){
        while(right <= high and arr[i] > 2 *arr[right]) right++;
        cnt = right - (mid+1);

    }

}

void mergeSor(int arr[],int low,int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    mergeSor(arr,low,mid);
    mergeSor(arr,mid+1,high);
    countPairs(arr,low,mid,high);
    mer(arr,low,mid,high);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSor(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<cnt;
}