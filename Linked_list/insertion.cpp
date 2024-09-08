#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = nullptr;
    }
};
node* convert(vector<int>&arr){
    node*head = new node(arr[0]);
    node*temp = head;
    for(int i=1;i<arr.size();i++){
     temp->next = new node(arr[i]);
    temp = temp->next;

    }
    return head;
}
node* insertat_head(node* head,int value){
    node* temp = new node(value);
    temp->next = head;
    return temp;
}
node* insertTail(node* head,int value){
    node* temp = head;
    while(temp){
        if(temp->next == nullptr){
            temp->next =new node( value);
            break;
        }
        temp = temp->next;
    }
    return head;
}
//inserting before value..
node* insertBeforeValue(node* head,int ele,int value){
    if(head == nullptr) return head;
    node*temp = head;
    if(head->data == ele){
        temp = new node(value);
        temp->next = head;
        return temp;
    }
    node* pre = nullptr;
 
    while(temp){

        if(temp->data == ele){
            node* new_node = new node(value);
            new_node->next = temp;
            pre->next = new_node;
            break;
        }
        pre = temp;
        temp = temp->next;
    }
    return head;

}
node* anyIndex(node* head,int index,int value){
    if(head == nullptr) return head;
    node*temp = head;
    if(index == 1){
        temp = new node(value);
        temp->next = head;
        return temp;
    }
    node* pre = nullptr;
    int cnt = 0;
    while(temp){
        cnt++;
        if(cnt == index){
            node* new_node = new node(value);
            new_node->next = temp;
            pre->next = new_node;
            break;
        }
        pre = temp;
        temp = temp->next;
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
    vector<int>arr = {1,2,3,4,5};
    node* head = convert(arr);
    head = insertat_head(head,100); //we can take input n pass also.
    head = insertTail(head,6000);
    int index;
    cout<<"enter the index where you want to insert";
    cin>>index;
    head = anyIndex(head,index,78);
    print(head);
    cout<<"enter the value u want to before that";
    int anyvalue;cin>>anyvalue;
    head = insertBeforeValue(head,anyvalue,100000);
    print(head);
    return 0;

}
