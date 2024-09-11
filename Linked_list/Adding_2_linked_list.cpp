#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }

};
node* insert1(node* head,int value){
    node* newE = new node(value);
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
node* insert2(node* head,int value){
    node* newE = new node(value);
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
node* AddTwoLinkedList(node* head1, node* head2){
    node* t1 = head1;
    node* t2 = head2;
    node* dummyNode = new node(-1);
    node* current = dummyNode;
    int carry = 0;
    while(t1 or t2){
        int sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum += t2->data;
        node* newList = new node(sum%10);
        carry = sum/10;
        current->next = newList; //still current is pointing to -1 so we move the current to new element added..
        current = current->next; 
    //NOW HAVE TO MOVE THE t1 and t2 ahead if they are there..
    if(t1) t1 = t1->next;
    if(t2) t2 = t2->next;
    }
    if(carry){
        node* nee = new node(carry);
        current->next = nee;
    }
    return dummyNode->next;
}
void print(node* mergeHEAD){
    node* temp = mergeHEAD;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    int n;cin>>n;
    node* head1 = nullptr;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        head1 = insert1(head1,value);
    }
    cout<<"now elements of second linled list size n values";
    int m;cin>>m;
    node* head2 = nullptr;
    for(int i=0;i<m;i++){
        int value;
        cin>>value;
        head2 = insert2(head2,value);
    }
    node* mergeHEAD = nullptr;
    mergeHEAD = AddTwoLinkedList(head1,head2);
    print(mergeHEAD);
    return 0;
}