#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int val){
        data = val;
        left = right = nullptr;
    }
};
void create_tree(node* root,vector<int>& arr){
    if(arr.empty()) return;
    queue<node*>q;
    q.push(root);
    int i=1;
    while(i<arr.size()){
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
    

}
void pre_order(node* root){ ///root - left - right...
    if(root == NULL) return;
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void post_order(node* root){ //left - right - root....
    if(root== NULL) return;
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";

}
void In_order(node* root){
    if(root == NULL) return;
    In_order(root->left);
    cout<<root->data<<" ";
    In_order(root->right);
}
int main(){
    vector<int>nodes = {1,2,3,4,5,6,7,8,9};
    node* root = new node(nodes[0]);
    create_tree(root,nodes);
    cout<<"Pre_order of tree: "<<endl;
    pre_order(root);
    cout<<endl<<"Post_order: "<<endl;
    post_order(root);
    cout<<endl<<"In_order: "<<endl;
    In_order(root);
}