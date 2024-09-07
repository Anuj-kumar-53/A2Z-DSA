//inserting the array elements and removing the first element
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
node* insertArray(vector<int>&arr){
    node* head = new node(arr[0]);
    node* temp = head;
    for(int i=1;i<arr.size();i++){
        temp->next = new node(arr[i]);
        temp = temp->next;
    }
    return head;

}

//deletes tail
node* deleteTail(node*& head){
    if(head == nullptr || head->next == nullptr) return NULL;
    node* temp = head;
    while(temp->next->next != nullptr){
        temp= temp->next;
    } 
    delete(temp->next);
}
//deletes head..
node* removeHead(node*& head){
    if(head == nullptr) return head;
    node* temp = head;
    head = head->next;
    free(temp); //delete(temp) both can be used to delete the first head..
    return head;
}

void print(node* head){
    node* temp = head;
    cout<<"after deleting the first head..";
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node* deleteK(node*& head,int k){
    if(head == nullptr) return head;
    if(k==1){// if we need to delete the value just use head->data == value...
        node*temp = head;
        head = head->next;
        free(temp);
        return head;
    }
        node* temp = head;
        int cnt = 0;
        node* pre = nullptr;
        while(temp){
            cnt++;
            if(cnt == k){
                    pre->next = temp->next;
                    break;
            }
            pre = temp;
            temp = temp->next;
        }
        return head;
    
}
node* deletevalue(node*& head,int k){
    if(head == nullptr) return head;
    if(head->data==k){// if we need to delete the value just use head->data == value...
        node*temp = head;
        head = head->next;
        free(temp);
        return head;
    }
        node* temp = head;
        node* pre = nullptr;
        while(temp){
            if(temp->data == k){
                    pre->next = temp->next;
                    break;
            }
            pre = temp;
            temp = temp->next;
        }
        return head;
    
}

int main(){
    vector<int> arr ={10,20,30,40,50};
    node* head = insertArray(arr);
    // head = removeHead(head);
    // head = deleteTail(head);
    int k;cin>>k;
    //this delete k does all the above work can delete at any index.
    head = deleteK(head,k);
    head = deletevalue(head,k);
    print(head);
    return 0;
}


// //inserting and printing all the elements in a linked list
// #include<bits/stdc++.h>
// #include<memory>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;

//     node(int value){
//         data = value;
//         next = nullptr;
//     }
// };
// void insertElements(node*& head,int value){
//     node* newElement = new node(value);
//     if(head == nullptr)
//     head = newElement;
//     else{
//         node* temp = head;
//         while(temp->next != nullptr){
//             temp = temp->next;

//         }
//         temp->next = newElement;
//     }

// }
// void print(node* head){
//     node* temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     node* head = nullptr;
//     insertElements(head,20);
//     insertElements(head,30);
//     insertElements(head,40);
//     insertElements(head,50);


//     print(head);
// }