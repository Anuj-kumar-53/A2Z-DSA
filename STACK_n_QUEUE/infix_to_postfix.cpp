// the input format should be infix = (a+b)*(a-b) kind of this thing
#include<bits/stdc++.h>
using namespace std;
int priority(char ch){
    if(ch =='^') return 3;
    else if(ch =='/' or ch =='*') return 2;
    else if(ch =='+' or ch == '-') return 1;
    else return -1;
}
void Infix_to_Postfix(string s){
    stack<char>st; string result;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a' and c<='z') or (c>='A' and c<='Z')or(c>='0' and c<='9') )
        result+=c;
        else if(c == '(') st.push(c);
        else if(c == ')'){
            while(!st.empty() and st.top() != '('){
                result += st.top();
                st.pop();
            }
            st.pop();

        }
        else{
            while(!st.empty() and priority(c)<=priority(st.top())){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }

    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    cout<<"the final result after converting in postfix we get :"<<endl<<result;
}
int main(){
    string str; 
    cout<<"enter an infix string : ";
    cin>>str;
   
    Infix_to_Postfix(str);
    return 0;

}