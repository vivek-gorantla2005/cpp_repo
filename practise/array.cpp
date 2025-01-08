#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout << "enter the number of elements in the array";
    cin >> n;
    int arr[n];
    cout << "enter the number of elements in the array";
    for (int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << "displaying data o the array";
    for (int i = 0 ; i < n ;i++){
        cout << arr[i] << '\n';
    }
    return 0;
}