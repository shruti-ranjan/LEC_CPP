#include <iostream>
using namespace std;

// Base class 1
class Base1
{
public:
    void displayBase1()
    {
        cout << "This is Base 1" << endl;
    }
};

// Base class 2
class Base2
{
public:
    void displayBase2()
    {
        cout << "This is Base 2" << endl;
    }
};

// Derived class inheriting from multiple base classes
class Derived : public Base1, public Base2
{
public:
    void displayDerived()
    {
        cout << "This is the Derived class" << endl;
    }
};

int main()
{
    Derived derived;

    derived.displayBase1();   // Accessing member of Base1
    derived.displayBase2();   // Accessing member of Base2
    derived.displayDerived(); // Accessing member of Derived

    return 0;
}
