//double linked list it points at the front and at the back also..
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;
    public:
    node(int data1,node* next_val,node* back_val){
        data = data1;
        next = next_val;
        back = back_val;
    }
    public:
    node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node* insert_ele(vector<int>& arr){
    node* head = new node(arr[0]);
    node* pre = head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i],nullptr,pre);
        pre->next = temp;
        pre = temp;
    }
    return head;
}
node* removeHead(node* head){
    if(head == nullptr) return head;
    node* pre = head;
    head = head->next;
    head->back = nullptr;
    // pre->back = nullptr;
    delete pre;
    return head;
}
node* removeTail(node* head){
    if(head == nullptr || head->next == nullptr) return head;
    node* temp = head;
    while(temp->next != nullptr){
         temp = temp->next;
    }
    node* pre = temp->back;
    pre->next = nullptr;
     temp->back= nullptr;
    delete temp;
    return head;
}
node* removeK_ele(node* head, int k){
    node* temp = head;
    int cnt =0;
    while(temp){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    node* pre = temp->back;
    node* front = temp->next;
    if(pre == nullptr || front == nullptr){
        delete temp;
        return nullptr;
    }
    else if(pre == nullptr){
        return removeHead(head);
    }
    else if(front == nullptr){
        return removeTail(head);
    }
   
        pre->next = front;
        front->back = pre;
        temp->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return head;
    
}
void remove_THE_node(node* head){
    node* temp = head;
    node* pre = temp->back;
    node* front = temp->next;
    if(front == nullptr){
        pre->next = nullptr;
        temp->back = nullptr;
        free (temp);
        
        
    }
    pre->next = front;
    front->back = pre;
    temp->next = temp->back = nullptr;
    free(temp);
 

}

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    node* head = insert_ele(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // int k;cout<<"enter the index u want to delete: ";
    // cin>>k;
    // head = removeK_ele(head,k);
  remove_THE_node(head->next->next->back);
    print(head);
    return 0;
}
