#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    public:
    node(int data1){
        data = data1;
        next = nullptr;

    }

};
node* conversion_of_array(vector<int>&arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i =1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}
//counting the elements of linklist..
int lengthall(node*head){
    int cnt =0;
    node* temp = head;
    while(temp){
        temp = temp ->next;
        cnt++;
    }
    return cnt;
}

//checking if there is value present in the linklist...
// all head should be passed 
int check(node*head,int vale){
    node*temp = head;
    while(temp){
        if(temp->data == vale){
            return 1;//which means true value present..
        }
            temp = temp->next;
    }
    return 0;

}
int main(){
    vector<int>arr = {2,3,5,6,34,1};
    node* head = conversion_of_array(arr);
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    //iterating through the linklist
    //always keep the head stady never move..
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    //this way we can print the entire linklist..

    //calling the above 2 functions to count the lenght n to check if the element present or not..
    cout<<lengthall(head)<<endl;
    cout<<check(head,34)<<endl;

}