#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
       node(int val){
        data = val;
        next = nullptr;
    }
    node(int vlw,node* nod){
        data= vlw;
        next = nod;
    }
};
node* insert(node* head,int val){
 node* newE = new node(val);
 if(head == nullptr){
    head= newE;return head;
 }
 node* temp = head;
 while(temp->next){
    temp = temp->next;
 }
 temp->next = newE;
 return head;
}
node* separate_odd_even(node* head){
    node* odd = head;
    node* EvenH = head->next;
    node* even = EvenH;
    if(head == nullptr or head->next == nullptr){
        return head;
    }
    while(even and even->next){
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = EvenH;

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
    int n;cin>>n;
    node* head = nullptr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        head = insert(head,val);
    }

    head = separate_odd_even(head);

    print(head);
}