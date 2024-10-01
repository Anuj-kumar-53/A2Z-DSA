//so from a string we have to remove k-digits so that we get the least possible ans..
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter string of characters: ";
    string s;cin>>s;
    int k;
    cout<<"eneter how many elemneets u want to remove : ";
    cin>>k;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        while(!st.empty() and st.top()-'0' > s[i]-'0' and k>0){ // we r doing -'0' beacsue we are comparing integers
            st.pop();k--;
        }
        st.push(s[i]);
    }
    while(!st.empty() and k>0){
        st.pop();k--;
    }
    string ans;
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    if(ans.back() == '0') ans.pop_back(); //removes the leading zeros.
    reverse(ans.begin(),ans.end());
    int i=0;
    while(i<ans.size() and ans[i]=='0'){ //this is also to remove leading zeros..
            i++;
        }
        if(i == ans.size()) 
        return '0';
    cout<<"the smallest answer possible after removing k elements are: "<<ans.substr(i);
    return 0;

}