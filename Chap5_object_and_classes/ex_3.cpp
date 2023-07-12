#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    char name[50];
    char phone[10];

public:
    void getdata()
    {
        cout << "\nEnter Roll no:";
        cin >> roll;
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter phone number:";
        cin >> phone;
    }
    void showdata()
    {
        cout << "Name:  " << name << endl;
        cout << "Roll no: " << roll << endl;
        cout << "Phone Number: " << phone << endl;
    }
}; // end of class
int main()
{
    student s1, s2;
    s1.getdata();
    s2.getdata();
    cout << "First student" << endl;
    s1.showdata();
    cout << "Second student" << endl;
    s2.showdata();
    return 0;
}