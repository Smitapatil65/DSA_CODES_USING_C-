#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Helper function to detect cycle using DFS
    bool cycle(int s, vector<bool>& visited, vector<bool>& currVisited, vector<int> adj[]) {
        visited[s] = true;
        currVisited[s] = true;

        for (auto x : adj[s]) {
            if (!visited[x]) {
                if (cycle(x, visited, currVisited, adj))
                    return true;
            } else if (currVisited[x]) {
                return true; // Back edge found → cycle exists
            }
        }

        currVisited[s] = false; // backtrack
        return false;
    }

    // Main function to check if graph has cycle
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // Step 1: Convert edge list to adjacency list
        vector<int> adj[V];
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v); // directed edge u → v
        }

        // Step 2: Initialize visited arrays
        vector<bool> visited(V, false), currVisited(V, false);

        // Step 3: Call DFS for each unvisited node
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (cycle(i, visited, currVisited, adj))
                    return true;
            }
        }

        return false; // No cycle found
    }
};

// Driver code
int main() {
    Solution obj;

    // Example 1: Graph with cycle
    int V = 4;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 1}};
    cout << "Cycle present? " << (obj.isCyclic(V, edges) ? "Yes" : "No") << endl;

    // Example 2: Graph without cycle
    V = 4;
    edges = {{0, 1}, {1, 2}, {2, 3}};
    cout << "Cycle present? " << (obj.isCyclic(V, edges) ? "Yes" : "No") << endl;

    return 0;
}
