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
void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//using the concept of vertical level order traversal...
void TopView(node* root,vector<int>&ans){
    if(root == NULL) return;
    map<int,int>mpp;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();q.pop(); //we are using auto cause its a pair fn;
        node* temp = it.first;
        int line = it.second;
        if(mpp.find(line) == mpp.end()){
            mpp[line] = temp->data;
        }
        if(temp->left) q.push({temp->left,line-1});
        if(temp->right) q.push({temp->right,line+1});
    }
    for(auto it :mpp){
        ans.push_back(it.second);
    }
}
void BottomView(node* root,vector<int>&ans){
    if(root == NULL) return;
    map<int,int>mpp;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();q.pop();
        node* temp = it.first;
        int line = it.second;
        mpp[line] = temp->data;
        if(temp->left) q.push({temp->left,line-1});
        if(temp->right) q.push({temp->right,line+1});
    }
    for(auto x:mpp){
        ans.push_back(x.second);
    }
}
void right_side_view(node* root,vector<int>&ans,int level){
    if(root == NULL) return;
    if(ans.size() == level) ans.push_back(root->data);
    right_side_view(root->right,ans,level+1);
    right_side_view(root->left,ans,level+1);

}
void left_side_view(node* root,vector<int>&ans,int level){
    if(root == NULL) return;
    if(ans.size() == level) ans.push_back(root->data);
    left_side_view(root->left,ans,level+1);
    left_side_view(root->right,ans,level+1);

}
int main(){
    int n;cin>>n;
    node* root = NULL;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        root = insert(root,val);
    }
  cout<<"inorder: ";
    inorder(root);
    cout<<endl;
    vector<int>TOPans;
    TopView(root,TOPans);
    cout<<"top view: ";
    for(int i=0;i<TOPans.size();i++){
        cout<<TOPans[i]<<" ";
    }
    vector<int>BOTTOMans;
    BottomView(root,BOTTOMans);
    cout<<endl<<"Bottom view: ";
    for(int i=0;i<BOTTOMans.size();i++){
        cout<<BOTTOMans[i]<<" ";

    }
    int level =0;
    vector<int>Rightans;
    right_side_view(root,Rightans,level);
    cout<<endl<<"RIGTH hand side view: ";
    for(int i=0;i<Rightans.size();i++){
        cout<<Rightans[i]<<" ";
    }

    vector<int>leftans;
    left_side_view(root,leftans,level);
    cout<<endl<<"left hand side view: ";
    for(int i=0;i<leftans.size();i++){
        cout<<leftans[i]<<" ";
    }


}