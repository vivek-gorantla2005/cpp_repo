#include<iostream>
#include<queue>
using namespace std;

int main(){
    // priority_queue<int> q; //greatest element on the top of the queue
    priority_queue<int,vector<int> ,greater<int>> q;  // priority queue lowest priority on the top of the queue
    q.push(50);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(5);
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }

}