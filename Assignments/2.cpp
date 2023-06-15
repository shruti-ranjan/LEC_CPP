#include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imag;
    
    Complex()    //default constructor
    {
        float real,imag;
    }

    Complex (float re,float im)      //parameterized constructor
    {
        real = re;
        imag = im;
    }

    void getvalue()             //member function
    {
        cout<<"Enter the real part:";
        cin>>real;
        cout<<"Enter the imag part:";
        cin>>imag;
    }

    void showvalue()         //member function
    {
        cout<<"("<<real<<"+i "<<imag<<")";

    }

    };    //end of class

Complex add(Complex a,Complex b)        //non member function
{
   Complex result;
   result.real=a.real+b.real;
   result.imag=a.imag+b.imag;
   return result;
}
  int main()
  {
    Complex c1,c2(4.3,5.3),c3;
    c1.getvalue();
    c3=add(c1,c2);
    c1.showvalue();
    cout<<"+";
    c2.showvalue();
    cout<<"=";
    c3.showvalue();
  }