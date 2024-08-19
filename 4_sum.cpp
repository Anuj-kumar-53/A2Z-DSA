#include<bits/stdc++.h>
using namespace std;
int main(){
    int target;
    cout<<"value to be searched";
    cin>>target;
     vector<vector<int>> ans;
    int n;cin>>n;
    int nums[n];
    cout<<"enter the elements in a sorted manner";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
     for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = nums[i] + nums[j]; 
                    sum += nums[k];
                    sum += nums[l];
                    if(sum > target) l--;
                    else if(sum < target) k++;
                    else{
                vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                ans.push_back(temp);
                k++;
                l--;
                while(k<l and nums[k] == nums[k-1]) k++;
                while(k<l and nums[j] == nums[j+1]) j++;
                    }
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