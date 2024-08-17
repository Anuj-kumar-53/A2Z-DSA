//brute solution becasue it is taking extra
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> list;
    map <int,int> mpp;
    int mini =  int(n/3) + 1;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]] == mini){
            list.push_back(arr[i]);
        }
        if(list.size() == 2) break;
    }
    for(auto it: list){
        cout<<it<<" ";
    }

}