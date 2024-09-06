#include<bits/stdc++.h>
using namespace std;
//we can use class also n do in the same way..
struct node{
    public:
    int data;
    node* next;
    public:
    node(int data1,node* next1){
        data = data1;
        next = next1;

    }
    
};
int main(){
    vector<int> arr = {1,4,3,54,2};
    node* y =new node(arr[2],nullptr);
    cout<<y<<endl; // it gives the address
    cout<<y->data<<endl; //it prints the element
    cout<<y->next<<endl;
}