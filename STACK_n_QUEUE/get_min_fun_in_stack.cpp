#include<bits/stdc++.h>
using namespace std;
class stack_min{
    stack<int>st;
    int mini;
    public:
    stack_min(){
        // while(st.empty()== false) st.pop();
        mini = INT_MAX;
    }
    void push(int val){
        if(st.empty()){
            mini = val;
            st.push(val);
        }
        else{
            if(val>mini) st.push(val);
            else{
                st.push(2*val - mini); //this program to change the min incase we pop in between
                mini = val; // now the top element stored here we will handle this in top fn
            }
        }
    }
    void pop(){
        if(st.empty()) exit(1);
        int x = st.top();
        st.pop();
        if(x<mini){
            mini = 2*mini - x; // to get back the previous min after popping..
        }
    }

    int top(){
        if(st.empty()) exit(1);
       int x= st.top();
        if(x<mini){
            return mini;
        }
        else return x;
    }
    int getmin(){
        return mini;
    }
};
int main(){
    stack_min st;
    st.push(12);
    st.push(15);
    st.push(10);
    st.push(1);
    cout<<"the min val: "<<st.getmin()<<endl;
    st.pop();
    cout<<"the top element: "<<st.top()<<endl;
    st.pop();
    cout<<"the top element: "<<st.top()<<endl;
    cout<<"the min val currently in stack: "<<st.getmin();


}