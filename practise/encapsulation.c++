#include<iostream>
#include<string>
using namespace std;
class Encapsulation{
    private:
        string ipaddress = "100.0.30.250";

    public:
        void setipaddress(string newaddress){
            ipaddress = newaddress;
        }

        string getnewipaddress(){
            return ipaddress;
        }
};

int main(){
    Encapsulation fetchIP;
    fetchIP.setipaddress("100.0.30.200");
    cout << fetchIP.getnewipaddress();
}