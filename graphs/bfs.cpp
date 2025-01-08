#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void main(){
    int v = 5;
    int e = 6;
    vector<vector<int>>adjlist(v);
    adjlist[0] = {1, 3};
    adjlist[1] = {0, 2};
    adjlist[2] = {1, 3, 4};
    adjlist[3] = {0, 4, 2};
    adjlist[4] = {2, 3};

    queue<int>q;
    vector<bool>visited(v, false);
    q.push(0);
    visited[0] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node;
        for(int neighbour : adjlist[node]){
            if(!visited[neighbour]){
            q.push(neighbour);
            visited[neighbour] = true;
            }
        }
    }
}