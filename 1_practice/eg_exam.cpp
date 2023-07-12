#include <iostream>
using namespace std;

// Class with default, parameterized, and copy constructors
class MyClass
{
private:
    int value;

public:
    // Default constructor
    MyClass()
    {
        value = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    MyClass(int val)
    {
        value = val;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    MyClass(MyClass &obj)
    {
        value = obj.value;
        cout << "Copy constructor called." << endl;
    }

    // Function to display the value
    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    // Default constructor
    MyClass obj1, obj2(10), obj3 = obj2;

    // Parameterized constructor

    // Copy constructor

    // Display values
    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();
    cout << "Object 3: ";
    obj3.display();

    return 0;
}
