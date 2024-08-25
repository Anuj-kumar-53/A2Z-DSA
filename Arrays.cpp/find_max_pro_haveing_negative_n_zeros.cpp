//finding max product in an array having negative n zeros with o(n) cocmoplecity..
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = 0;
    int prefix  = 1;
    int sufix = 1;
    for(int i=0;i<n;i++){
        if(prefix == 0) prefix = 1;
        if(sufix == 0) sufix =  1;
        prefix = prefix * arr[i];
        sufix = sufix * arr[n-i-1];
         maxi = max(maxi,max(prefix,sufix));
    }
    cout<<maxi;
}