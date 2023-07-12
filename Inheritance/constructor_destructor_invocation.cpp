#include <iostream>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "This is base class constructor" << endl;
    }
    ~Parent()
    {
        cout << "This is base class destructor" << endl;
    }
};
class child : public Parent
{

public:
    child()
    {
        cout << "This is derived class constructor" << endl;
    }
    ~child()
    {
        cout << "This is derived class destructor" << endl;
    }
};

int main()
{

    child c1;
}