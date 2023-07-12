#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void displayBase()
    {
        cout << "This is the Base class" << endl;
    }
};

// Derived class inheriting from the Base class
class Derived : public Base
{
public:
    void displayDerived()
    {
        cout << "This is the Derived class" << endl;
    }
};

// SubDerived class inheriting from the Derived class
class SubDerived : public Derived
{
public:
    void displaySubDerived()
    {
        cout << "This is the SubDerived class" << endl;
    }
};

int main()
{
    SubDerived subDerived;

    subDerived.displayBase();       // Accessing member of Base class
    subDerived.displayDerived();    // Accessing member of Derived class
    subDerived.displaySubDerived(); // Accessing member of SubDerived class

    return 0;
}
