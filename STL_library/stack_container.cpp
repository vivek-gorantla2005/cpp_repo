#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    //top
    cout << "Top element is: " << s.top() << endl;

    cout << "size of stack " << s.size() << endl;


    stack <int> s2;
    s2.swap(s); //moves all elements for s stack to s2 stack therevy making s stack empty
    cout << "size of stack s: " << s.size() << endl;
    cout << "size of stack s2: " << s2.size() << endl;

    while(!s2.empty()){
        cout<< s2.top() << endl;
        s2.pop(); // removes the top element
    }
    cout<< endl;

    return 0;
}