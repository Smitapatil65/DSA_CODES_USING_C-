#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topoSort(int V, vector<vector<int>>& adj) {
        vector<int> ans;
        queue<int> q;
        vector<int> inDegree(V, 0);

        // Step 1: Calculate in-degree of each node
        for (int i = 0; i < V; ++i) {
            for (int neighbor : adj[i]) {
                inDegree[neighbor]++;
            }
        }

        // Step 2: Enqueue all nodes with in-degree 0
        for (int i = 0; i < V; ++i) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }

        // Step 3: Kahn's Algorithm
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (int neighbor : adj[node]) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        // Optional: Check if topological sort was possible (cycle detection)
        if (ans.size() < V) {
            cout << "Cycle detected. Topological sort not possible.\n";
        }

        return ans;
    }
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

    Solution obj;
    vector<int> result = obj.topoSort(V, adj);

    cout << "Topological Sort: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
