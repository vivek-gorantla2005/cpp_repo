#include<iostream>
#include<string>
using namespace std;

class studentdetails{
    public:
    string name;   
    int age;
    
    float totalmarks;
    studentdetails(string n, int a, float t){
        name = n;
        age = a;
        totalmarks = t;
        cout<< "this is a parent class constructor" <<endl;
    }
};

class display : public studentdetails{  
    public:
    display() : studentdetails(name,age,100.0){
        cout<< "this is a display class child constructor" <<endl;
        cout<< "name : %s, age : %d, total marks : %d",name,age,totalmarks << endl;
    }
    
};

int main(){
    studentdetails c("vivek",20,100.0);
    c.disp(c);

}