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
node* findK(node* head,int k){
    node* temp = head;
    int cnt =1;
    while(temp){
        if(cnt == k) return temp;
        temp = temp->next;
        cnt++;
    }
    return temp;

}
node* Rotat(node* head,int k){
 node* temp = findK(head,k);
    head = temp->next;
    temp->next = nullptr;
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
        int value;
        cin>>value;
        head = insert1(head,value);
    }
    int k;cout<<"rotate the linked list by k places: ";;cin>>k;
    node* tail = head;int len=1;
    while(tail->next){
        len+=1;
        tail = tail->next;
    }
    tail->next = head;
      if(k%len ==0) {
        print(head);
        return 0;
      } else{

    k = k%len;
      }
    head = Rotat(head,k);
    print(head);
    return 0;
}