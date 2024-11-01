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
node* insert(node*root,int val){
    if(root == NULL){
        return new node(val);
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* cur = q.front();q.pop();
        if(cur->left) q.push(cur->left);
        else{
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
void findallpath(node* root,vector<vector<int>>&ans,vector<int>&cur){
    if(root == NULL) return;
    cur.push_back(root->data);
    if(root->left == NULL and root->right == NULL){
        ans.push_back(cur);
    }
    else{
        findallpath(root->left,ans,cur);
        findallpath(root->right,ans,cur);
    }
    cur.pop_back();
}
bool findpath(node* root,vector<int>&ans,int key){
    if(root == NULL) return false;
    ans.push_back(root->data);
    if(root->data == key){
        return true;
    }
    if(findpath(root->left,ans,key) or findpath(root->right,ans,key)){
        return true;
    }
    ans.pop_back();
    return false;

}
int main(){
    int n;
    cin>>n;
    node* root = NULL;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        root = insert(root,val);
    }
    vector<vector<int>>ans;
    vector<int>cur;
    //all the paths are printed..
    findallpath(root,ans,cur);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    //Now to print the path up to particular node which will be given.......
    int x;
    cout<<"the node you want path of  or leaf node: ";
    cin>>x;
    vector<int>arr;
    findpath(root,arr,x);
    cout<<"paticular path: ";
    for(auto it: arr){
        cout<<it<<" ";
    }
}