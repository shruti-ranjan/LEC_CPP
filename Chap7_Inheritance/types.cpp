#include <iostream>
using namespace std;

// Base class
class Operation
{
protected:
    int num1;
    int num2;

public:
    void setOperands(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
};

// Derived class (Single Inheritance)
class Addition : public Operation
{
public:
    int getSum()
    {
        return num1 + num2;
    }
};

int main()
{
    // Single Inheritance
    Addition add;
    add.setOperands(5, 3);
    cout << "Sum: " << add.getSum() << endl;

    return 0;
}