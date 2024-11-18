#include<bits/stdc++.h>
using namespace std;
void print_source_to_destination(int source,int destination,vector<vector<int>>adj,int parents[],int distance[],int n){
    if(distance[destination] == INT_MAX){
        cout<<"no path exist return: ";
        return;
    }

    cout<<"toatal distance: "<<distance[destination]<<endl;
    cout<<"the path form source to that distance: ";
    stack<int>st;
    int current = destination;
    while(current != -1){
        st.push(current);
        current = parents[current]; //going backwords..

    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }


}
bool bfs(int source,int destination,vector<vector<int>>adj,int parents[],int distance[],int n){
    vector<int>vis(n,0);
    queue<int>q;
    for(int i=0;i<n;i++){
        parents[i] = -1;
        distance[i] = INT_MAX;
    }
    vis[source] =1;
    distance[source] =0;
    q.push(source);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                distance[it] = distance[node] +1;
                parents[it] = node;
                q.push(it);


                    if(it == destination){
                        return true;
                    }
            }


            
        }
    }
    return false;

}
int main(){
    int n,e;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter edge: ";
    cin>>e;
    vector<vector<int>>adj(n);
    for(int i=0;i<n;i++){
        int u,v;
        cout<<"enter u v: ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int source,destination;
    cout<<"enter the starting point: ";
    cin>>source;
    cout<<"Enter the ending point: ";
    cin>>destination;
    int parents[n];
    int distance[n];
    if(bfs(source,destination,adj,parents,distance,n)){
            print_source_to_destination(source,destination,adj,parents,distance,n);
    }else{
        cout<<"No path exist from source to destination: ";
    }
    return 0;
    



}