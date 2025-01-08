#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adjlist, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for(int neighbour : adjlist[node]) {
        if(!visited[neighbour]) {
            dfs(neighbour, adjlist, visited);
        }
    }
}

int main() {
    int v = 5;
    int e = 6;
    vector<vector<int>> adjlist(v);
    
    adjlist[0] = {1, 3};
    adjlist[1] = {0, 2};
    adjlist[2] = {1, 3, 4};
    adjlist[3] = {0, 4, 2};
    adjlist[4] = {2, 3};

    vector<bool> visited(v, false);
    
    int start = 0;
    dfs(start, adjlist, visited);
    
    return 0;
}
