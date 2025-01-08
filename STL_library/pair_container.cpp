#include <iostream>
#include<vector>
using namespace std;

class PairFunction{
    private:
    struct Pair {
        int first;
        int second;
    } p;
    
    public:
    PairFunction(int first, int second) {
        p.first = first;
        p.second = second;
    }

    void printPair() const {
        cout << "First element: " << p.first << endl;
        cout << "Second element: " << p.second << endl;
    }
};

int main() {
    PairFunction pf(10, 20);
    pf.printPair();

    //using pair stl functions 
    pair <int,int> p = {10, 20};
    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;

    //vector of pairs
    vector<pair<int,int>> p_vec = {{1,2},{3,4},{4,5}};
    for (int i = 0; i < p_vec.size(); i++)
    {
        cout <<  p_vec[i].first  << " " << p_vec[i].second << endl;
    }

    p_vec.push_back({3,4}); //pair of values already created
    p_vec.emplace_back(3,4); //inplace object is created during pushback
    
    return 0;
}
