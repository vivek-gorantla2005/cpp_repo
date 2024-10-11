#include<iostream>
using namespace std;

void printn(int i ,int n){
    if(i ==0){
        return;
    }
    printn(i - 1, n);
    cout << i << " ";
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printn(n, n);
    return 0;
}