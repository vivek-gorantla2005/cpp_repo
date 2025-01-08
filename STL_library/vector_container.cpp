#include <iostream>
#include<vector>
using namespace std;
int main(){
    //vector is a dynamic array
    //vector intialization 
    vector<int> vec;
    vector<int>vec2 = {12,3,4};
    vector<int>vec3 (3,10); //vector of size 3 with all values initialized to 10
    vector<int> vec4(vec3); //copy initialize vector 4 values to vector 3

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << vec.size() << endl;  // 3
    cout << vec.capacity() << endl; //4
    vec.push_back(4);
    vec.push_back(5);
    for(auto i : vec){
        cout << i << " ";
    }cout << endl;
    int p = vec.back(); //last element
    int f = vec.front(); //first element
    vec.pop_back(); //pop back doesnot return a value of last element
    cout << "popped:" << p << endl;
    cout << "first element:" << f << endl;

    vec.insert(vec.begin()+2, 100); //insert 100 at 2nd index
    //vec.erase(start,end);
    // vec.erase(vec.begin()+2); //delete element at 2nd index
    // vec.erase(vec.begin(), vec.end()); //delete all elements
    // vec.clear(); //delete all elements

    //vector iterator
    //pointer to first element in the memory
    cout<< *(vec.begin()) << endl;
    cout << *(vec.end()) << endl; //0 points to element just next after the last element

    vector <int> :: iterator it;
    for(auto it = vec.begin(); it!= vec.end(); it++){
        cout << *(it) << " ";
    }cout << endl;
    //reverse iterator
    for(auto it = vec.rbegin(); it!= vec.rend(); it++){
        cout << *(it) << " ";
    }

}
