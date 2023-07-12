#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;
    Base *ptr = &derived1; // virtual use gareko karan base class ko pointer le derived class ko address acess garna milyo
    ptr->print();
    return 0;
}
