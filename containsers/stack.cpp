#include<bits/stdc++.h>
using namespace std;
// all this operation are (beg o of 1)  o(1);
// *********stack is LIFO (last in first out)************************
int main(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(4);//{4,3,2,1}
    st.emplace(5);//{5,4,3,2,1}
    cout<<st.top(); // the last element who enterd the stack will be printed
    st.pop(); // the 5 is deleted
    cout<<st.top(); // now 4 will be printed
    st.size();// it will be 4 cause the element will still be sounted until we pop
    cout<<st.empty();// output: False
    stack<int>st1,st2;
    st1.swap(st2);  




}