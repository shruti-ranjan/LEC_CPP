#include <iostream>
using namespace std;

// base class
class Operation
{
private:
    int a, b;

public:
    int performOperation(int a, int b)
    {
        a = 0;
        b = 0;
    }
};

class Addition : public Operation // derived class
{
public:
    int performOperation(int a, int b)
    {
        return a + b;
    }
};

int main()
{

    Addition addOperation;

    int result = addOperation.performOperation(5, -3);

    cout << "The result of addition is: " << result << endl;

    return 0;
}