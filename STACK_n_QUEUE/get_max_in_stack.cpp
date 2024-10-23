#include<bits/stdc++.h>
using namespace std;
class Stack_max{
    stack<int>st;
    int maxi;
    public:
    Stack_max(){
        maxi = INT_MIN;
    }
    void push(int val){
        if(st.empty()){
            st.push(val);
            maxi = val;
        }
        else{
            if(val<maxi){
                st.push(val);
            }
            else{
                st.push(2*val - maxi);
                maxi = val;
            }
        }
    }
    void pop(){
        if(st.empty()) exit(1);
        int x = st.top();
        st.pop();
        if(x>maxi) maxi = 2* maxi - x;

    }
    int top(){
        if(st.empty()) exit(1);
        int x = st.top();
        if(x>maxi) return maxi;
        else return x;
    }

    int getmax(){
        return maxi;
    }
};
int main(){
    Stack_max s;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        s.push(k);
    }
    cout<<"the max now: "<<s.getmax()<<endl;

    s.pop();
    s.pop();
    cout<<"the max now: "<<s.getmax();
    s.pop();
}