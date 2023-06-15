#include<iostream>
using namespace std;

int *roll = new int;
char *name = new char[15];

void scanRollandName()
{
    cout<<"Enter your name:";
    cin>>name;                     //strings are pointer in itself 
    cout<<"Enter the Roll no:";
    cin>>*roll;

}
void freeMemory()
{
    delete roll;
    delete [] name;

}

void printRollandName()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll no:"<<*roll<<endl;
}

int main()
{
    scanRollandName();
    cout<<"Memory allocated dynamically for name and roll"<<endl;
    cout<<"Value of Name and Roll before deallocation"<<endl;
    printRollandName();
    freeMemory();
    cout<<"\nAfter Deallocation: ";
    printRollandName();
    return 0;
}
