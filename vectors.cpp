#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector creating syntax
    // vector<int> v;
    // vector<int> u = {1,2,3,4,5,6,7,8}
    // vector<int> w(5,0) two arguments one is sizeof the vector and other is the value at each index

    //vector functions
    // size
    // push_back
    // pop_back
    // front
    // back
    // at
    vector <int> vec; ;
    vec.push_back(100);
    vec.push_back(200);
    vec.pop_back();
    vec.at(0);
    cout<< "element at the first index is" << vec.front() << endl;
    cout<< "element at the last index is" << vec.back() << endl;
    cout<< "size of vector is" << vec.size() << endl;
    for (int num : vec){
        cout << num << " ";  //prints each element of vector
    }

}