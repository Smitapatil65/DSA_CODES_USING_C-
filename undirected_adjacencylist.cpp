#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printEdge(vector<int>adj[],int v)
{
    for(int i=0;i<v;i++)
    {  cout<<"Adjacency list of vertex "<<i<<":";
       for(auto x:adj[i])
       {
         cout<<x<<"";
       }
       cout<<endl;
    }
}
int main()
{
    int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,1,4);
    addEdge(adj,3,4);
    printEdge(adj,v);
    return 0;
}

*/

void bfs(vector<int>adj[],int v,int s,vector<bool>&visited)
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

void bfsdis(vector<int>adj[],int v)
{
    vector<bool>visited(v,false);
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
            bfs(adj,v,i,visited);
    }
}


void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
   int v=7;
   vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,5);
    addEdge(adj,5,6);
    cout<<"BFS"<<endl;
    bfsdis(adj,v);
    return 0;

}





