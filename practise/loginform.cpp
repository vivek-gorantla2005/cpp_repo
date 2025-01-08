#include <iostream>
#include <string>
using namespace std;

class Users
{
protected:
    int users[1000];
    string email;
    string password;
    string username;
    Users(string email)
    {
        this->email = email;
    }
    void savedusers(string email)
    {

    }
};

class LoginForm : public Users
{
};

class SignInForm : public Users
{
};

class UserProfile : public Users
{
};

int main()
{
}