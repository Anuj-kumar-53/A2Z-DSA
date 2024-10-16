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
node* insert(node* temp,int val){
    if(temp == nullptr){
        temp = new node(val);
        return temp;
    }
 
    if(val < temp->data){
        temp->left = insert(temp->left,val);
    }
    else{
        temp->right = insert(temp->right,val);
    }
    return temp;
}
void in_order(node* root){
    if(root == NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}
int main(){
    int n;
    cin>>n;
    node* root = nullptr;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        root = insert(root,a);
    }
    in_order(root);
    return 0;
}