#include<iostream>
#include<list>
#include<deque>
using namespace std;

int main(){
    //list in cpp acts as a doubly linked list
    list<int> mylist;
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_front(0);
    mylist.push_front(5);
    mylist.emplace_back(100);
    mylist.emplace_front(200);
    for(auto i : mylist){
        cout << i << " ";
    }cout << endl;

    mylist.pop_back();
    mylist.pop_front();
    for(auto i : mylist){
        cout << i << " ";
    }cout << endl;


    //size,erase,brgin,end,rbegin,rend ,front,back,clear all functions are same as vector functions

    //Deque is same as a list but it is a double ended queue , all functions are same in a deque random acces of element is
    //possible but in  alist random access is not possible

    deque <int> d (mylist.begin(), mylist.end());
    for(auto i : d){
        cout << i << " ";
    }cout << endl;

    cout<<d[1];
    // cout<<mylist[2]; //gives an error
}