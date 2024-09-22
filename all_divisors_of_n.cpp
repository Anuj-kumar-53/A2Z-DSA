#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            arr.push_back(i);
            if(n/i != i){
                arr.push_back(n/i);
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}