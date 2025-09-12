#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

bool valid(int n,vector<vector<int>>&edges,int so,int de)
{
    unordered_map<int,vector<int>>adj;
    for(auto x:edges)
    {
        int u=x[0];
        int v=x[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>visited(n,false);
    queue<int>q;
    q.push(so);
    visited[so]=true;

    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        if(v==de)
            return true;
        for(int ne:adj[v])
        {
            if(!visited[ne])
            {
                visited[ne]=true;
                q.push(ne);
            }
        }

    }
    return false;
}
int main()
{
    int n=6;
    vector<vector<int>>edges={
    {0,1},{0,2},{3,5},{5,4},{4,3}
    };

   int so=0;
   int de=5;
   if(valid(n,edges,so,de))
   {
      cout << "Path exists between " << so << " and " << de << endl;
    } else {
        cout << "No path exists between " << so<< " and " << de << endl;
    }

    return 0;






}














