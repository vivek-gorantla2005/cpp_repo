#include<iostream>
#include<string>
using namespace std;

string removeduplicates(string str){
    if(str.length()==0){
        return "";
    }   
    char ch = str[0];

    string result = removeduplicates(str.substr(1));

    if(ch == result[0]){
        return result;
    }
    return ch + result;
}

int main(){
    cout<<removeduplicates("hellooo");
}