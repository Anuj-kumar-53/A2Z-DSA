#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans; stack<int>st;
    for(int i=0;i<n;i++){
        if(arr[i]> 0 ) st.push(arr[i]);
        else{
            while(!st.empty() and st.top()>0 and st.top()<abs(arr[i])){ //this abs is used to chnage the sign..- to +
                st.pop();
            }
            if(!st.empty() and st.top() == abs(arr[i])){
                st.pop();
            }
            else if(st.empty() and st.top()<0) st.push(arr[i]);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top()); st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<"only this elements are left in the given array after all the collisions: "<<endl;
    for( int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}