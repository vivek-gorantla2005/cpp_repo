#include<iostream>
#include<vector>
using namespace std;
void main(){

    //undirected graph
    int n,m;
    cin >> n >> m;
    //adj matrix
    int adj[n+1][m+1];
    for(int i = 0 ; i <m;i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    //adj list
    vector<int>adjlist[n+1];
    for (int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}