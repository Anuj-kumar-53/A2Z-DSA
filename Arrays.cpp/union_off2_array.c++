#include<bits/stdc++.h>
using namespace std;
void optimal_union(int arr1[],int n1,int arr2[],int n2){
    int i= 0;
    int j=0;
    vector<int> unionarr;
    while(i< n1 && j<n2){
        if(arr1[i] <=arr2[j]){
            if(unionarr.size() == 0 || unionarr.back() != arr1[i] ){
                unionarr.push_back(arr1[i]);
            }
            i++;
        
        }
        else{
            if(unionarr.size() == 0 || unionarr.back() != arr2[j] ){
                unionarr.push_back(arr2[j]);
            }
            j++;
        }

    }
    while(i<n1){
            if(unionarr.size() == 0 || unionarr.back() != arr1[i] ){
                unionarr.push_back(arr1[i]);
            }
            i++;
    }
    while(j<n2){
                if(unionarr.size() == 0 || unionarr.back() != arr2[j] ){
                unionarr.push_back(arr2[j]);
            }
            j++;
    }
    for(int i=0;i<unionarr.size();i++){
        cout<<unionarr[i]<<" ";
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
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }

    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    vector<int>temp;
    int i=0;
    for(auto it: st){
        temp.push_back(it);
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    // optimal or the best;
    optimal_union(arr1,n1,arr2,n2);
}