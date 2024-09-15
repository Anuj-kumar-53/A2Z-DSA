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
    node(int val,node* p){
        data = val;
        next = p;
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
node* FindIntersec(node* head,node* secondHEAD){
    node* t1 = head;
    node* t2 = secondHEAD;
    while(t1 != t2){
        t1 = t1->next;
        t2 = t2->next;
        if(t1 == t2) return t1; // we can return any of it..
        if(t1 == nullptr) t1 = secondHEAD;
        if(t2== nullptr) t2 = head;
    }
    return t1;
}
int main(){
    node* head = nullptr;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        head = insert(head,val);
    }
    cout<<"now enter the size n elements of second linked list:"<<endl;
    int m;cin>>m;
    node* secondHEAD = nullptr;
    for(int i=0;i<m;i++){
        int val;cin>>val;
        secondHEAD = insert(secondHEAD,val);
    }


    // Now manually create an intersection between the two linked lists
    node* temp1 = head;
    while (temp1 && temp1->data != 30) {  // Find the node where we want to start the intersection
        temp1 = temp1->next;
    }

    node* temp2 = secondHEAD;
    while (temp2->next) {  // Traverse to the end of the second list
        temp2 = temp2->next;
    }
    temp2->next = temp1;  // Set the intersection point (node with value 30)

    
    node* intersection = FindIntersec(head, secondHEAD);
    if (intersection != nullptr) {
        cout << "Intersection at node with value: " << intersection->data << endl;
    } else {
        cout << "No intersection." << endl;
    }

    return 0;
}