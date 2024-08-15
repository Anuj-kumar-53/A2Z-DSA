//premutation: arranging an array in various ways possible in an ascending order
#include<bits/stdc++.h>
using namespace std;
void print_arr(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
vector<int> arr;
arr.push_back(2);
arr.push_back(1);
arr.push_back(5);
arr.push_back(4);
arr.push_back(3);
arr.push_back(0);
arr.push_back(0);
int n = arr.size();
int index  = -1;
for(int i=n-2;i>0;i--){
    if(arr[i]<arr[i+1]){
        index = i;
        break;
    }
}
if(index == -1){
    reverse(arr.begin(),arr.end());
    print_arr(arr,n);
}
for(int i=n-1;i>index;i--){
    if(arr[i]>arr[index]){
        swap(arr[i],arr[index]);
        break;
    }
}
reverse(arr.begin() + index + 1,arr.end());
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}