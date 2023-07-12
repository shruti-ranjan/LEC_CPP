#include <iostream>
using namespace std;
class employee
{
private:
    char name[25];
    float salary;

public:
    void getdata()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter salary:";
        cin >> salary;
    }
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Salary:" << salary;
    }
};
int main()
{
    employee *eptr; // pointer to object
    employee e;
    eptr = &e;
    eptr->getdata();
    cout << "Accessing data through pointer variable:";
    eptr->showdata();
    return 0;
}
