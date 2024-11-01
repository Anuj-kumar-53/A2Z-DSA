//CHILDREN SUM PROPERTY: 
//the node is the sum of node left and right...
//in this program we will convert the the nodes so that it follows the property...
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
    if(root == NULL) return new node(val);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* cur = q.front();q.pop();
        if(cur->left) q.push(cur->left);
        else {
            cur->left = new node(val);
            return root;
        }
        if(cur->right) q.push(cur->right);
        else{
            cur->right = new node(val);
            return root;
        }

    }
    return root;
}
void childrenSumProperty(node*& root){
    if(root == NULL) return;
    int sum =0;
    if(root->left) sum += root->left->data;
    if(root->right) sum += root->right->data;
    if(sum >= root->data) root->data = sum;
    else{
        if(root->left)
        root->left->data = root->data;
        else if(root->right)
        root->right->data = root->data;
    }
    childrenSumProperty(root->left);
    childrenSumProperty(root->right);
    int bottomsum =0;
    if(root->left) bottomsum += root->left->data;
    if(root->right) bottomsum += root->right->data;
    if(root->left or root->right) root->data = bottomsum;
}
void preorder(node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
int main(){
    int n;cin>>n;
    node* root = NULL;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        root = insert(root,val);
    }
    childrenSumProperty(root);
    preorder(root);
    return 0;
}