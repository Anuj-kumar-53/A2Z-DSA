//Monotonic stack:- means storing something in order...
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() and st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()) ans.push_back(-1);
        else{
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    cout<<endl<<"here is the next greater element array: "<<endl;
    for(int i=n-1;i>=0;i--){ //printing reverse cause we stored reversed
        cout<<ans[i]<<" ";
    }

}