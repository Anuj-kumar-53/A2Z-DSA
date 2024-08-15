#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;

    }
        //fetch their occurances in the array..
    int q;
    cin>>q;
    while(q--){
        int num; cin>>num;
        cout<<hash[num]<<endl;

    }

    // hashing in string
    string s;
    cin>>s;
    int hashs[26]={0};
    for(int i=0;i<s.size();i++){
        hashs[s[i]-'a'] += 1;

    }
    int a;
    while(a--){
        char c;
        cin>>c;
        cout<<hashs[c-'a']<<endl;
    }
}
