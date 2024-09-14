//suppose linked list is 1,5,9 so we will bring them together n add 1 do it will be 160
//n we will represent it in a linked list 1,6,0;
//we will do it with the help of recursion backtrackking because this reverse is taking o(3n) that y..
//int this code the inputs should be less then 10 even though is more it will set to zero and the carry 
//willl not be greater then one...
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d,node* val){
        data = d;
        next = val;
    }
    public:
    node(int d){
        data = d;
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
    temp->next= newE;
    return head;
}
//reversing the single linked list..
// node* reverses(node* head){
//     if(head == nullptr or head->next == nullptr){
//         return head;
//     }
//     node* pre = nullptr;
//     node* current = head;
//     while(current){
//         node* temp = current->next;
//         current->next = pre;
//         pre = current;
//         current = temp;
//     }
//     return pre;
// }
void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int recursion_process(node* head){
    node* temp = head;
    if(temp == nullptr){
        return 1;      // this acts as a carry;
    }
    int carry = recursion_process(temp->next);
    temp->data += carry;
    if(temp->data <10) return 0;
    temp->data = 0;
    return 1;
}
node* addONE(node* head){
    int carry = recursion_process(head);
    if(carry == 1){
        node* newE = new node(carry);
        newE->next = head;
        return newE;
    }
    return head;
}
int main(){
    int n;cin>>n;
    node* head = nullptr;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        head = insert(head,val);
    }
    // head = reverses(head);
    head = addONE(head);

    print(head);
}