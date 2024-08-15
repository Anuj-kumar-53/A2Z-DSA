#include<bits/stdc++.h>
using namespace std;
void optimal_intersection(int n1,int arr1[],int n2,int arr2[]){
    vector<int>ans;
    int i=0;int j=0;
    while(i<n1 && j<<n2){
        if(arr1[i]< arr2[j]) i++;
        else if(arr2[j]<arr1[i]) j++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

}
int main(){
      int n1;cin>> n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>> arr1[i];
    }
     int n2;cin>> n2;
     int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>> arr2[i];
    }
    vector<int>ans;
    int vis[n2] = {0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i] == arr2[j] && vis[j] == 0){
                ans.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if(arr1[i]<arr2[j]) break;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    //optimal solution.>>>>>>.
    optimal_intersection(n1,arr1,n2,arr2);
}