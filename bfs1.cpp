#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
void BFS(vector<int>adj[],int v,int s,vector<bool>&visited)
{
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<"";
        for(int v:adj[u])
        {
            if(!visited[v])
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }

}
void BFSdis(vector<int>adj[],int v)
{
  vector<bool>visited(v,false);
  for(int i=0;i<v;i++)
  {
      if(!visited[i])
        BFS(adj,v,i,visited);
  }
}

void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    cout<<"BFS traversal\n";
    BFSdis(adj,v);
    return 0;
}








