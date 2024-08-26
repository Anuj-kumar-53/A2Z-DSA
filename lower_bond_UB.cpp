//lower bond and upper bond all together
// or we can call floor or ceil
//ceil the greater value
//floor the less than or equal to value
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target vealue";
    cin>>target;
    int low =0;
    int high =n-1;
    int flor = -1;
    int ceil =  -1;
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == target) {
            cout<<mid<<" "<<mid;//index
            return 0;
        }
        else if(arr[mid]>= target){
            ceil = mid;
            high = mid-1;
        }
        else{
            flor = mid;
            low = mid+1; 
        }

    }
    //index base printing....
    cout<<"floor: "<<flor<<endl<<"ceil: "<<ceil;


}