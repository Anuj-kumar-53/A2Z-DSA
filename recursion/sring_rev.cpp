#include<bits/stdc++.h>
#include<strings.h>
using namespace std;
int palin(int i,int n,string arr){
    if(i>=n/2) return true;
    if(arr[i] != arr[n-i-1]) 
    return false;
return palin(1+i,n,arr);
    
}
int main(){
    int n;
    cin>>n;
    string arr;
    
        cin>>arr;
    
  cout<<  palin(0,n,arr);

}



















































































