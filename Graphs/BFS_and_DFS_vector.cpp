//breadth first search.......
//one list way and other matrix way..
#include <bits/stdc++.h>
using namespace std;
//here it will go down until it has child and after its over only we will go other side..
//we use the concept of recurssion..
void Depth_First_Search(vector<vector<int>>adj,vector<int>&ans,vector<int>&vis,int start){
        vis[start] =1;
        ans.push_back(start);
        for(auto it : adj[start]){
            if(!vis[it]){
                Depth_First_Search(adj,ans,vis,it);
            }
        }

}

void Breadth_First_search(vector<vector<int>>adj,vector<int>&ans,vector<int>&vis,int start){
    //level wise..
    queue<int>q;
    vis[start] = 1;
    q.push(start);
    while(!q.empty()){
        int node = q.front();q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }


}
int main(){
    int n,m;
    cout<<"No of nodes: ";
    cin>>n;
    cout<<"No of adjacents: ";
    cin>>m;
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"enter the edge like 0 1 or u v: ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n,0);
    vector<int>ans;
    int start =0;

    Breadth_First_search(adj,ans,vis,start);

    for(int i=0;i<n;i++){
        if(!vis[i]){

    Breadth_First_search(adj,ans,vis,i);
        }
    }
    cout<<"Breadth first traversal: ";
    for(auto it: ans){
        cout<<it<<" ";
    }

    vector<int>visit(n,0);
    vector<int>answer;
    Depth_First_Search(adj,answer,visit,start);
    for(int i=0;i<n;i++){
        if(!visit[i]){
            Depth_First_Search(adj,answer,visit,i);
        }
    }
    cout<<endl;
    cout<<"Depth First traversal: ";
    for(auto it: answer){
        cout<<it<<" ";
    }




    cout<<endl;

}