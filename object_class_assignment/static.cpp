#include<iostream>         //code snipet in vs code
using namespace std;       //
 
void display()
{
    static int i=1;
    i=i+5;
    cout<<"Value of i is :"<<i<<endl;

}

int main()
{
    display();
    display();
    display();
}