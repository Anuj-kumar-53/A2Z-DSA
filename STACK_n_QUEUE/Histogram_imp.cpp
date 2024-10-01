// we represent the arr in the form of histogram..
//each element has width=1 and height will be the input..
//we have to give the max area forming an rectangle..
//the formula is area =max(area,arr[elee]*(nse-pse-1))
#include<bits/stdc++.h>
using namespace std;
int findMaxRectangle(vector<int>arr){
    stack<int>st; int area=0; // here the stack stores the indexes...
    for(int i=0;i<arr.size();i++){
        while(!st.empty() and arr[st.top()]>arr[i]){
            int ele = st.top();st.pop();
            int nse=i;
            int pse = st.empty()?-1:st.top();
            area = max(area,arr[ele]*(nse-pse-1));

        }
        st.push(i);
    }
    while(!st.empty()){
         int ele = st.top();st.pop();
            int nse=arr.size(); //last element..
            int pse = st.empty()?-1:st.top();
            area = max(area,arr[ele]*(nse-pse-1));
    }
    return area;
}
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int area = findMaxRectangle(arr);
    cout<<"this is the max lenght og the rectangel: "<<area;
    return 0;

}
