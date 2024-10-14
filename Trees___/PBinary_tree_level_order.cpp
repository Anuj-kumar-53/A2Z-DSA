// in this code we implement the given arr in the form of tree and also print it level wise...

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int val){
        data = val;
        right = left = nullptr;
    }
};
void create_treee(node* root,vector<int>&arr){
    if(arr.empty()) return;
    queue<node*>q;
    q.push(root);
    int i=1;
    while(!q.empty()){
        node* current = q.front();
        q.pop();
    if(i<arr.size()){
        current->left = new node(arr[i]);
        q.push(current->left);
        i++;
    }
    if(i<arr.size()){
        current->right = new node(arr[i]);
        q.push(current->right);
        i++;
    }
    }
//here we changed the elements of the nodes according to the binary tree..
}
void print_tree(node* root){
    if(!root) return;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* current = q.front();
        q.pop();
        cout<<current->data<<" ";
        if(current->left != nullptr) q.push(current->left);
        if(current->right) q.push(current->right);
    }
}

int main(){
    vector<int>nodes = {1,2,3,4,5,6,7};
    node* root = new node(nodes[0]);
    create_treee(root,nodes);
    print_tree(root);
    return 0;
}