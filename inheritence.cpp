#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
        string company;
        string name;
        Car(string company, string name){
            this->company = company;
            this->name = name;
        }
};

class CarVarient : public Car{
    public:
        string color;
        string model;
        CarVarient(string company, string name, string color ,string model) : Car(company, name){
            this->color = color;
            this->model = model;
        }

        void disp(){
            cout << "Company: " << company << endl;
            cout << "Name: " << name << endl;
            cout << "Color: " << color << endl;
            cout << "Model: " << model << endl;
        }
};

int main(){
    CarVarient myCar("Toyota", "Camry", "Red", "2020");
    myCar.disp();
    return 0;
}