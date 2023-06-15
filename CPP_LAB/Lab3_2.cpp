#include <iostream>
using namespace std;

int *roll = new int;
char *name = new char [15];

void getdata(){
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter the roll number: ";
cin>>*roll;
}

void freeMemory(){
delete roll;
delete [] name;
}

void showdata(){
cout<<endl<<"Name: "<<name;
cout<<endl<<"Roll No.: "<<*roll;
}

int main ()
{
getdata();
cout<<endl<<"Memory allocated dynamically for name and roll.";
cout<<endl<<"Value of Name and roll before Deallocation";
showdata();
freeMemory();
cout<<"\n\nAfter Deallocation: ";
showdata();
return 0;
}