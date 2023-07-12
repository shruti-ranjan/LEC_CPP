#include <iostream>
using namespace std;

void display() // static variable is also called as class variable
{
    static int i = 1;
    i = i + 5;
    cout << "Value of i is :" << i << endl;
}

int main()
{
    display();
    display();
    display();
}