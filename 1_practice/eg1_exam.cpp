#include <iostream>

using namespace std;

class MyClass
{
private:
    int data;

public:
    MyClass(int value)
    {
        data = value;
    }

    // Declare the friend function
    friend void displayData(MyClass obj1);
};

// Define the friend function
void displayData(MyClass obj1)
{
    cout << "Data in MyClass: " << obj1.data << endl;
}

int main()
{
    MyClass obj(42);

    // Call the friend function to display the private data
    displayData(obj);

    return 0;
}
