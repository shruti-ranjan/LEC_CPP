#include <iostream>
using namespace std;
class Complex
{
private:
    const float real = 3.4;
    float imag;

public:
    void getnum(float x)
    {
        imag = x;
    }

    void display();
};
void Complex::display()
{
    cout << "(" << real << "," << imag << ")";
}
int main()
{
    Complex c1;
    c1.getnum(2.3);
    cout << "Displaying complex number:" << endl;
    c1.display();

    return 0;
}
