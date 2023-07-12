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

    // Declare the friend class
    friend class FriendClass;
};

class FriendClass
{
public:
    void displayData(MyClass obj)
    {
        cout << "Data in MyClass: " << obj.data << endl;
    }
};

int main()
{
    MyClass obj1(42);

    FriendClass friendObj;
    friendObj.displayData(obj1);

    return 0;
}
