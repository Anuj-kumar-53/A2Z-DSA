#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data;
    node* next;
    node* back;
    public:
    node(int data1,node* next1,node* back1){
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
void insert(node*& head,int value){
    node* newval = new node(value);
    if(head == nullptr){
        head = newval;
    }
    else{
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newval;
        newval->back = temp; // this is the only change in double linked list..
    }
}

node* insertK_ele(node* head,int k,int value){
    if(k == 1){
        node* newele = new node(value,head,nullptr);
        return newele;
    }
    node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    node* pre = temp->back;
    node* newele = new node(value,temp,pre);
    pre->next = newele;
    temp->back = newele;
    return head;

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
    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    int k;cout<<"tell the element u wnat delete before: ";
    cin>>k;
    head = insertK_ele(head,k,1000);
    print(head);
    return 0;

}