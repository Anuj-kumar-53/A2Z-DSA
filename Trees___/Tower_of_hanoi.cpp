#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
void moveDisk(int n,char s,char h,char d){
    if(n==0) return;
    moveDisk(n-1,s,d,h);
    cout<<"move disk "<<n<<" from pole "<<s<<" to "<<d<<endl;
    moveDisk(n-1,h,s,d);
}
int main(){
    int n;cin>>n;
    cout<<"printing iteration wise: "<<endl;
    moveDisk(n,'s','h','d');
    cout<<"Total steps taken: ";
    cout<<pow(2,n)-1;
    return 0;
}