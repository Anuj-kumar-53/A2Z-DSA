//1.reverse the string and after that make sure u check the brackets and make them ( )
//2. apply infix ot postfix
//3. reverse the ans..
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
            if(c=='^'){
                
            while(!st.empty() and priority(c)<priority(st.top())){ 
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
            
        else{ 

            while(!st.empty() and priority(c)<priority(st.top())){ 
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
        }

    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    // we have to reverese it again because we need perfix
    reverse(result.begin(),result.end());
    cout<<"the final result after converting in postfix we get :"<<endl<<result;
}
int main(){
 string str;
 cout<<"enter the string in infix formmat: ";
 cin>>str;
 reverse(str.begin(),str.end());
 cout<<str<<endl;
 for(int i=0;i<str.length();i++){
    char c= str[i];
    if(c==')') str[i] = '(';
    else if(c =='(') str[i] =')';
 }
 cout<<"after changing the directions of the brackets: "<<str<<endl;
 Infix_to_Postfix(str);
 return 0;

}