#include <iostream>
using namespace std;

class base
{
    // body of base class
};

class derived : public base
{
public:
    derived()
    {
        cout << "Default Constructor from Derived class";
    }
};

int main()
{
    derived d;
    return 0;
}