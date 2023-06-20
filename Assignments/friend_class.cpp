#include <iostream>
using namespace std;
class B;
class A
{
private:
    char passA[20];

public:
    void getdata()
    {
        cout << "Enter password of A:";
        cin >> passA;
    }
    void showdata(B);
    friend class B;
};
class B
{
private:
    char passB[20];

public:
    void getdata()
    {
        cout << "Enter the password of B:";
        cin >> passB;
    }
    void showdata(A a)
    {
        cout << "A's Password is:" << a.passA << endl;
    }
    friend class A;
};
void A ::showdata(B b)
{
    cout << "B's passwod is:" << b.passB << endl;
}

int main()
{
    A a;
    B b;
    a.getdata();
    b.getdata();
    a.showdata(b);
    b.showdata(a);
    return 0;
}