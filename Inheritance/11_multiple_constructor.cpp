#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "default constructor from base class" << endl;
    }
    base(int data)
    {
        cout << "paramiterized constructor from base class" << endl;
    }
};
class derived : public base
{
public:
    derived(int data)
    {
        cout << "paramiterized constructor from base class" << endl;
    }
};
int main()
{
    derived d(5);
    return 0;
}