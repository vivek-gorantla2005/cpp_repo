#include <iostream>
using namespace std;

class Add{
    public:
        int sum(int num1,int num2);
};

int Add::sum(int num1,int num2){
    return num1 + num2;
}

int main(){
    Add nums;
    cout << nums.sum(10,20);
}
