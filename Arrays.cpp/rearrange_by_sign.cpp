#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> posi,neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            posi.push_back(arr[i]);

        }
        else neg.push_back(arr[i]);
    }
    if(posi.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[i*2] = posi[i];
            arr[i*2+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i=neg.size();i<posi.size();i++){
            arr[index]= posi[i];
            index++;
        }
    }
    else{
        for(int i=0;i<posi.size();i++){
            arr[i*2] = posi[i];
            arr[i*2+1] = neg[i];
        }
        int index = posi.size()*2;
        for(int i=posi.size();i<neg.size();i++){
            arr[index] = neg[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}