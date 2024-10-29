//here we will print the tree in anti-Clock wise......
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
bool isLeaf(node* root){
    return !root->left and !root->right;
}
class Solution{
    public:
void addLeftBound(node* root,vector<int>&res){
    node* cur = root->left;
    while(cur){
        if(!isLeaf(cur)) res.push_back(cur->data);
    
    if(cur->left) cur = cur->left;
     else cur = cur->right;
    
    }
}
void addRightBound(node* root,vector<int>&res){
    node* cur = root->right;
    vector<int>temp;
    while(cur){
        if(!isLeaf(cur)) {
            temp.push_back(cur->data);
        }
        if(cur->right) cur = cur->right;
     else cur = cur->left;
    }
    for(int i=temp.size()-1;i>=0;--i){
        res.push_back(temp[i]);
    }
}
void addLeaves(node* root,vector<int>&res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left,res);
    if(root->right) addLeaves(root->right,res);
}
vector<int>printBound(node* root){
    vector<int>res;
    if(!root){
        return res;
    }
    if(!isLeaf(root)) res.push_back(root->data);
    addLeftBound(root,res);
    addLeaves(root,res);
    addRightBound(root,res);
    return res;
}


};
void print(vector<int>&result){
    for(auto it: result){
        cout<<it<<" ";
    }
    cout<<endl;

}
node* insert(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp->left) q.push(temp->left);
        else{
        temp->left = new node(val);
        return root;
        } 
        if(temp->right) q.push(temp->right);
        else {
            temp->right = new node(val);
            return root;
        }

    }
    return root;
}
int main(){
    int n;cin>>n;
    node* root = NULL;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        root = insert(root,val);
    }
    Solution obj;
    vector<int>result = obj.printBound(root);
    cout<<"Boundary traversal: ";
    print(result);
    return 0;

}