#include<iostream>
#include<string>
using namespace std;
int count = 0;

void print(string str){
    if(count == 5){
        return;
    }
    cout<<("%s",str);
    count++;
    print(str);
}

int main(){
    string str;
    cout<<("enter a string");
    cin>>("%s",str);
    print(str);
}