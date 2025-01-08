#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void push_data(stack<int> &nums, vector<int> &visited, int data)
{
        if (visited[data-1] == false)
        {
            nums.push(data);
            visited[data - 1] = true;
        }
}
void setele(stack<int> &nums,vector<int> &setvector){
    while(!nums.empty()){
        setvector.push_back(nums.top());
        nums.pop();
    }
}
int main()
{
    stack<int> nums;
    vector<int> visited(10, false);
    vector<int> setelements;
    push_data(nums, visited, 10);
    push_data(nums, visited, 20);
    push_data(nums, visited, 30);
    push_data(nums, visited, 10);
    setele(nums, setelements);
    cout << "set elements are : " << endl;
    for(int i = 0; i < setelements.size(); i++){
        cout<< setelements[i] << endl;
    }
}