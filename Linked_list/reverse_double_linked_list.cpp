#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;
    public:
    node(int data1,node* next1,node* back1 ){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
void insertELE(node*& head,int val){
    node* newELE = new node(val);
    if(head == nullptr){
        head = newELE;
    }
    else{
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
       
        temp->next = newELE;
       newELE->back = temp;

        
    }
}
node* reverse(node* head){
    if(head == nullptr or head->next == nullptr) return head;
  node* pre = nullptr;
  node* current = head;
  while(current != nullptr){
    pre = current->back;
    current->back = current->next;
    current->next = pre;
    current = current->back; // moves to the next node
  }
    return pre->back;
}
void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
int main(){
    node* head = nullptr;
    insertELE(head,10);
    insertELE(head,20);
    insertELE(head,30);
    insertELE(head,40);
    insertELE(head,50);
    insertELE(head,60);
    head = reverse(head);
    print(head);
    return 0;
}