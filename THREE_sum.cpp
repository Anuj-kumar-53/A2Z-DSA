#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> ans;
    int n;cin>>n;
    int arr[n];
    cout<<"enter the elements in a sorted manner";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i>0 and arr[i] == arr[i-1]) continue;
        int j=i+1;
        int k =n-1;
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum>0) k--;
            else if(sum<0) j++;
            else{
                vector<int> temp = {arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k and arr[j] == arr[j-1]) j++;
                while(j<k and arr[k] == arr[k+1]) k--;
            }
        }
    }
    for(auto& it:ans){
        for(auto& anu:it){
            cout<<anu;
        }
        cout<<endl;
    }
}