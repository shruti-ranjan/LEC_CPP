#include <iostream>
using namespace std;
class A
{
private:
    int a, b, c;

public:
    A(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    void display()
    {
        cout << "The values are:" << endl;
        cout << a << endl
             << b << endl
             << c << endl;
    }
};
int main()
{
    A obj(1, 2, 3);
    -obj;
    obj.display();
}