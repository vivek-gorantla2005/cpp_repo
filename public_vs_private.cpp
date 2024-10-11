#include <iostream>
using namespace std;

class User {
private:
    string name;
    string email;
    string password;

public:
    // Constructor
    User(string name, string email, string password) {
        this->name = name;
        this->email = email;
        this->password = password;
    }

    // Getters
    string getName() {
        return name;
    }

    string getEmail() {
        return email;
    }

    string getPassword() {
        return password;
    }

    // Setters
    void setName(string name) {
        this->name = name;
    }

    void setEmail(string email) {
        this->email = email;
    }

    void setPassword(string password) {
        this->password = password;
    }

    // Display function
    void disp() {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Password: " << password << endl;
    }
};

int main() {
    // Creating an object using the constructor
    User u("John Doe", "john@example.com", "password123");

    // Display the original values
    u.disp();

    // Using setters to modify values
    u.setName("Jane Doe");
    u.setEmail("jane@example.com");
    u.setPassword("newpassword456");

    // Display the updated values
    cout << "\nAfter updating the details:\n";
    u.disp();

    // Using getters to access individual attributes
    cout << "\nAccessing individual attributes using getters:\n";
    cout << "Name: " << u.getName() << endl;
    cout << "Email: " << u.getEmail() << endl;
    cout << "Password: " << u.getPassword() << endl;

    return 0;
}
