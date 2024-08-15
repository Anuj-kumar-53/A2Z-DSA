// most voting algo..
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;int ele;
for(int i=0;i<n;i++){
    if(count ==0){
        count =1;
        ele = arr[i];
    }
    else if(arr[i] ==ele){
        count++;
    }
    else count--;

}
int c=0;
for(int i=0;i<n;i++){
    if(arr[i] == ele)
    c++;
}
if(c>n/2){
    cout<<"element: "<<ele<<endl<<"count :"<<c;
}

}