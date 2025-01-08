#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;
    q.pop();
    cout<<"after popping: front: "<<q.front()<<endl;
    cout<<"after popping: back: "<<q.back()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    //size,empty,swap are same functions as in stack
}