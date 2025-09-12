#include<iostream>
#include<vector>
using namespace std;

bool DFSrec(vector<vector<int>>&adj,int i,vector<bool>visited,int parent)
{
   visited[i]=true;
   for(int u:adj[i])
   {
       if(!visited[u])
       {
           if(DFSrec(adj,u,visited,i))
             return true;
       }else if(u!=parent)
       {
           return true;
       }
   }
   return false;
}

bool DFS(vector<vector<int>>&adj,int v)
{
    vector<bool>visited(v,false);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            if(DFSrec(adj,i,visited,-1))
                return true;
        }
    }
    return false;

}
void addEdge(vector<vector<int>>&adj,int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}
int main()
{
    int v=5;
    vector<vector<int>>adj(v);
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    addEdge(adj,4,1);

    if(DFS(adj,v))
        cout<<"Cycle deteceted in the graph"<<endl;
    else
        cout<<"no cycle in the graph"<<endl;
    return 0;

}



