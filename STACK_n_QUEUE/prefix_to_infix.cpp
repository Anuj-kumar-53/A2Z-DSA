//the only difference here is that we iterate from the back..
#include<bits/stdc++.h>
using namespace std;
void pre_to_in(string s){
    stack<string>st;string ans;
    for(int i=s.length()-1;i>=0;i--){
        string c(1,s[i]);
         if((c>="a" and c<="z") or (c>="A" and c<="Z")or(c>="0" and c<="9"))
         st.push(c);
         else{
            string t1=st.top();st.pop();
            string t2=st.top();st.pop();
            ans = '(' + t1 + c + t2 +')';
            st.push(ans);
         }
    }
    cout<<"after conversion to infix: "<<st.top();
}
int main(){
    string str;
    cout<<"input the prefix string: ";
    cin>>str;
    pre_to_in(str);
    return 0;
}