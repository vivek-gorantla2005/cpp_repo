#include <iostream>
#include <vector>
using namespace std;

// Function to perform DFS and detect a cycle
bool dfs(int node, int parent, vector<vector<int>>& adjlist, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbour : adjlist[node]) {
        if (!visited[neighbour]) {
            // Recur for unvisited neighbor
            if (dfs(neighbour, node, adjlist, visited)) {
                return true;
            }
        } else if (neighbour != parent) {
            // Cycle detected
            return true;
        }
    }
    return false;
}

int main() {
    int v = 5; // Number of vertices
    int e = 6; // Number of edges
    vector<vector<int>> adjlist(v);

    // Creating the adjacency list
    adjlist[0] = {1, 3};
    adjlist[1] = {0, 2};
    adjlist[2] = {1, 3, 4};
    adjlist[3] = {0, 4, 2};
    adjlist[4] = {2, 3};

    vector<bool> visited(v, false);

    // Check for a cycle in the graph
    bool hasCycle = false;
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, adjlist, visited)) {
                hasCycle = true;
                break;
            }
        }
    }

    if (hasCycle) {
        cout << "Cycle detected in the graph." << endl;
    } else {
        cout << "No cycle in the graph." << endl;
    }

    return 0;
}
