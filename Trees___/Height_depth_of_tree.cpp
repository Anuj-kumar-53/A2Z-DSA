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
void make_tree(node* root,int  arr[],int n){
    if(root == NULL or n<0) return;
    queue<node*>q;
    q.push(root);
    int i=1;
    while(i<n){
        node* current = q.front();
        q.pop();
        if(i<n){
            current->left = new node(arr[i]);
            i++;
            q.push(current->left);
        }
        if(i<n){
            current->right = new node(arr[i]);
            i++;
            q.push(current->right);
        }
    }

}
int depth(node* root){
    if(root == NULL) return 0;
    int left = depth(root->left);
    int right = depth(root->right);
    return 1+max(left,right);

}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node* root = new node(arr[0]);
    make_tree(root,arr,n);
    int height = depth(root);
    cout<<"the height of lenght of the tree is: "<<height;
    return 0;

}