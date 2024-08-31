#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;//here is is the power...
    int m;cin>>m; // here m is the value needed to be searched after doing the power
    int low = 1;
    int high = m;
    while(low<=high){
        int mid = (low+high)/2;
        long long result =1;
        //this loop finds the power n avoid overflow...
        for(int i=0;i<n;i++){
            result = result*mid;
            if(result>m) break;
        }
        if(result == m){
            cout<<mid;
            return 0;
        }
        else if(result> m){
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<"value not found";
    return 0;
}