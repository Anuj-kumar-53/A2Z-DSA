#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>>&adj,vector<int>&vis,vector<int>&ans,int start){
    queue<int>q;
    vis[start] = 1;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0;i<adj.size();i++){
            if(adj[node][i] == 1 and !vis[i]){
                vis[i] = 1;
                q.push(i);
            }

        }
    }
}

void DFS(vector<vector<int>>&adj,vector<int>&vis,vector<int>&ans,int start){
        vis[start] = 1;
        ans.push_back(start);
        for(int i=0;i<adj.size();i++){
            if(adj[start][i] == 1 and !vis[i]){
                DFS(adj,vis,ans,i);
            }
        } 
}
int main(){
    int n,m;
    cout<<"total nodes: ";
    cin>>n;
    cout<<"total edges: ";
    cin>>m;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"enter u v: ";
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    vector<int>vis(n,0);
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            BFS(adj,vis,ans,i);

        }
    }
    cout<<"Breadth First Traversal: ";
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;

vector<int>visited(n,0);
vector<int>answers;
for(int i=0;i<n;i++){
    if(!visited[i]){
        DFS(adj,visited,answers,i);
    }
}

cout<<"Depth First Traversal: ";
for(auto it: answers){
    cout<<it<<" ";
}




}