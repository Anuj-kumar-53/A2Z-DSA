//the input should be a vaild postfix.. like ab - bc+f*/
#include<bits/stdc++.h>
using namespace std;
void postfix_to_infix(string s){
    stack<string> st; //the stack should be string 
    string ans;
  
    for(int i=0;i<s.length();i++){
        string c(1,s[i]);//this is the way to convert char to string
        if((c>="a" and c<="z") or (c>="A" and c<="Z")or(c>="0" and c<="9")){

        st.push(c);
        }
        else{
            string t1 = st.top();st.pop();
            string t2 = st.top();st.pop();
            ans = '(' + t1 + c + t2 + ')';
           
            st.push(ans);

        }
    }
    cout <<"after conversion form postfix to infix: "<<st.top();

}
int main(){
    string str;
    cout <<"input postfix string: ";
    cin>>str;
    postfix_to_infix(str);
    return 0;
}