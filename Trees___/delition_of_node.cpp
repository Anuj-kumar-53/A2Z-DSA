#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
node* insert(node* root,int val){
    if(root == nullptr){
        root = new node(val);
        return root;
    }
    node* temp = root;
    if(val < temp->data){
        temp->left = insert(temp->left,val);
    }
    else{
        temp->right = insert(temp->right,val);
    }
    return root;
}
void in_order(node* root){
      if(root == NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}
//the above were just creating n printing in in_order...
//now we will start the process of deletion any given node......

//this fn find the last child on the left subtree in right...
node* findLast(node* root){
    if(root->right == NULL){
        return root;
    }
    findLast(root->right);
}

//this function make the joins n deletes the nodes....
node* help_delete(node* root){
    if(root->left == NULL){
        return root->right;
    }
    else if(root->right == NULL){
        return root->left;
    }
    node* rightChild = root->right;
    node* left_lastChild = findLast(root->left);
    left_lastChild->right = rightChild;
    return root->left;
}
// this computes everything..
node* deleteNode(node* root,int key){
    if(root == nullptr) return NULL;
    if(root->data == key) return help_delete(root); // here it will provide the node after deleting
    node* temp = root;
    while(root != NULL){
        if(root->data > key){
            if(root->left != NULL and root->left->data == key){
                root->left = help_delete(root->left);
                break;
            }
            else root = root->left;
        }
        else{
            if(root->right != NULL and root->right->data == key){
                root->right = help_delete(root->right);
                break;
            }
            else root = root->right;
        }


    }
    return temp; // the stored head;
}
int main(){
    int n;
    cin>>n;
    node* root = nullptr;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        root = insert(root,val);
    }
    in_order(root);
    int key;
    cout<<"Enter the node that you want to delete: "<<endl;
    cin>>key;
    deleteNode(root,key);
    cout<<"now the in_order travelsal after deleting that node is: "<<endl;
    in_order(root);
    return 0;
    
}