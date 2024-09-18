//reversing the elements by k groups..
#include<bits/stdc++.h>
#include<memory>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int value){
        data = value;
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

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node* findKnodes(node* temp,int k){
    k -= 1;
    while(temp != nullptr and k>0){
        k--;
        temp= temp->next;
    }
    return temp;
}
node* reverseLinkedList(node* temp){

}
node* findingTheElements(node* head,int k){
     node* temp = head;
    node* pre = nullptr;
    node* nextnod = nullptr;
    while(temp != nullptr){
        node* knode = findKnodes(temp,k); // this divides and make the group of k..
        if(knode == nullptr){
            if(pre) pre->next = temp; // if we dont find k elements we just add the remaining at the end..
            break;
        }
        nextnod = knode->next;
        knode->next = nullptr; // here we formed the k group elements
       temp = reverseLinkedList(temp);
        if(head == temp) head = knode;
        else pre->next = knode;
        pre = temp;
        temp = nextnod;

    }
    return head;
}
int main(){
    node* head = nullptr;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        head = insert(head,val);
    }
/// the algorith to reverse the element by k nodes imp...
int k;cout<<"enetr the group of how much elements u want to reverse at once";
cin>>k;
head = findingTheElements(head,k);
   

  print(head);
}