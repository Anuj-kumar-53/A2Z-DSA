#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s){
    stack<char>st;
    for(auto it: s){
        if(it == '(' || it == '[' || it == '{') 
        st.push(it);
        else{
            if(st.size() == 0) return false;
            char ch = st.top();
            st.pop();
            if((it == ')' and ch == '(') or (it == ']' and ch == '[') or (it == '}' and ch == '{'))
            continue;
            else return false;
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"input paranthesis: ";
    cin>>s;

if(isvalid(s)){
    cout<<"it has a balanced number if parenthecis...";
}
else cout<<"the paranthesis does not match..";
return 0;
}