//deletion of all the occurances of k in the given linked list....
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;
    node(int d,node* n,node* b){
        data = d;
        next = n;
        back = b;
    }
    node(int d){
        data = d;
        next = nullptr;
        back = nullptr;
    }
};
node* insert(node* head,int val){
    node* newE = new node(val);
    if(head == nullptr){
        head = newE;
        newE->back = head;
        return head;
    }
    node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newE;
    newE->back = temp;
    return head;
}
node* RemoveAllOccorances(node* head,int val){
    node* temp = head;
    while(temp){
        if(temp->data == val){
            if(temp == head) head = head->next;

        node* front = temp->next;
        node* pre = temp->back;
        if(front) front->back = pre;
        if(pre) pre->next = front;
        delete(temp); 
        temp = front;

        }else temp = temp->next;
    }
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
        int val;cin>>val;
        head = insert(head,val);
    }
    int k;cout<<"Enter the value u want to remove : ";cin>>k;
    head = RemoveAllOccorances(head,k);

    print(head);

}