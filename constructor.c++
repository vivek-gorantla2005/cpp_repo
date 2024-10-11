#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string carname;
        string carmodel;
        int caryear;
        Car(string x , string y , int z){
            carname = x;
            carmodel = y;
            caryear = z;
        }
        void disp();
};

void Car :: disp(){
    {
            cout << "car name : " << carname << '\n';
            cout << "car model :" << carmodel << '\n';
            cout << "car year :" << caryear << '\n';
        }   
}

int main(){
    Car mycar("alto","500",2019);
    mycar.disp();
    Car mysecondcar("tiago","xz",2015);
    mysecondcar.disp();
}
