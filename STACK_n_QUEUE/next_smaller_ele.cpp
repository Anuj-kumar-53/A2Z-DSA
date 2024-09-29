//finding the left next smaller element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans; stack<char>st;
    for(int i=0;i<n;i++){
        while(!st.empty() and st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()) ans.push_back(-1);  else ans.push_back(st.top());
        st.push(arr[i]);

    }
    cout<<"after change : ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
}
}