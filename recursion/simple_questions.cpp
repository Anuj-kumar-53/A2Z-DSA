#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    cout<<"anuj"<<endl;
    if(i>n)
    return;
    print(i+1,n);

}
void num(int i,int n){

    cout<<i<<endl;
    
    if(i>n)
    return;
    num(i+1,n);
}
void reverse(int n){

    cout<<n<<endl;
    
    if(n<0)
    return;
    reverse(n-1);
}

//**************backtracking important************
void imp_backtracking(int n){
    if(n<1)
    return;
    imp_backtracking(n-1);
    cout<<n<<endl;
}
void imp_backtracking_reverse(int i,int n){
    if(i>n)
    return;
    imp_backtracking_reverse(i+1,n);
    cout<<i<<endl;
}
void sum_number_n(int n,int su){
    if(n<1){
        cout<<su;
        return;
    }
    sum_number_n(n-1,su+n);
}
//*************functional*** with return type */
int sum(int n){
    if(n==0)
    return 0;
    return n + sum(n-1);
}
int fact(int n){
    if(n==1)
    return 1;
    return n * fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int i=1;
   int su=0;
   // print(i,n);
    //num(i,n);
    //reverse(n);
   // imp_backtracking(n);
   // imp_backtracking_reverse(i,n);
   //sum_number_n(n,sum);
   //cout<<sum(n);
   cout<<fact(n);



}
