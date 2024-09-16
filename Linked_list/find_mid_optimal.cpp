#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int dat,node* val){
        data = dat;
        next = val;
    }
    node(int dat){
        data = dat;
        next = nullptr;
    }
};
node* insert(node* head,int val){
    node* newE = new node(val);

    if(head == nullptr){
        head = newE;
        return head;
    }
    node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node* findMID(node* head){
    node* slow = head;
    node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    int n;
    cin>>n;
    node* head = nullptr;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        head = insert(head,val);
    }
    node* mid = findMID(head);
    cout<<mid->data;
}