#include <iostream>
using namespace std;

class Parent // base class
{
protected:
    int id_protected;
};
class Child : public Parent // derived class
{
public:
    void setId(int id)
    {
        id_protected = id; // derived class can access the protected datamembers of baseclass
    }

    void displayId()
    {
        cout << "Id_ protected is:" << id_protected << endl;
    }
};
int main()
{
    Child obj1;
    obj1.setId(3);
    obj1.displayId();
}