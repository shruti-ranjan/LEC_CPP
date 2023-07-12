#include <iostream>
using namespace std;

class Complex
{
private:
    const double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    double getReal() const
    {
        return real;
    }

    double getImaginary()
    {
        return imag;
    }

    void display() const
    {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c(3.5, 2.7);
    c.display();

    return 0;
}
