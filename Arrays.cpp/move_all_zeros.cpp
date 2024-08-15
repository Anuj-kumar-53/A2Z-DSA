#include<bits/stdc++.h>
using namespace std;
void optimal_solution(int arr[],int n){
    int j= 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j= i;
            break;
        }
    }
    for(int i= j+1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    int s = temp.size();
    for(int i=0;i<s;i++){
        arr[i] = temp[i];
    }
    for(int i=s;i<n;i++){
        arr[i] = 0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
// optimal n the best solution
    optimal_solution(arr,n);

}