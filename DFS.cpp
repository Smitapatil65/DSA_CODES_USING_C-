#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

void DFSRec(vector<int>adj[],int s,vector<bool>&visited)
{
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s])
    {
        if(!visited[u])
            DFSRec(adj,u,visited);
    }
}
void DFS(vector<int>adj[],int v)
{
    vector<bool>visited(v,false);
    for(int i=0;i<v;i++)
    {
       if(!visited[i])
            DFSRec(adj,i,visited);
    }
}

void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}
int main()
{
    int v=8;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,3,4);
    addEdge(adj,2,3);

    addEdge(adj,5,6);
    addEdge(adj,6,7);


    cout << "DFS traversal: ";
    DFS(adj,v);
    return 0;

}








