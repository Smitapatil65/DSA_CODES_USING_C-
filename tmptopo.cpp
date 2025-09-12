#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int>topo(int v,vector<vector<int>>&adj)
{
    vector<int>ans;
    queue<int>q;
    vector<int>ind(v,0);
    for(int i=0;i<v;i++)
    {
        for(int n:adj[i])
        {
            ind[n]++;
        }

    }
    for(int i=0;i<v;i++)
    {
        if(ind[i]==0)
        q.push(i);
    }
    while(!q.empty())
    {
       int node=q.front();
       q.pop();
       ans.push_back(node);
        for(int n:adj[node])
        {
            ind[n]--;
            if(ind[n]==0)
                q.push(n);
        }
    }
    if(ans.size()<v)
    {
        cout<<"cycle detected"<<endl;
    }
    return ans;

};
int main() {
    // Example usage
    int V = 6;
    vector<vector<int>> adj(V);

    // Example graph
    adj[5] = {2, 0};
    adj[4] = {0, 1};
    adj[2] = {3};
    adj[3] = {1};


    vector<int> result = topo(V, adj);

    cout << "Topological Sort: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
