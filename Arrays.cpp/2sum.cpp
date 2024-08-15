#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr [j] == target){
                cout<<i<<" "<<j;
                break;
            }
        }

    }
}
/* using hasing and vector array

 int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int more = target - a;
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i}; // If the complement is found, return the indices
            }
            mpp[a] = i; // Add the current number and its index to the map
        }
        
        return {}
*/