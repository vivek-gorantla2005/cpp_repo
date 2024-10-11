#include<iostream>
#include<string>
using namespace std;

void rev(string text){
    if(text.length() == 0){
        return;
    }

    string ros =text.substr(1);
    rev(ros);
    cout<<text[0];



}

int main(){
    rev("hello");
}