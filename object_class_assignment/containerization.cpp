#include<iostream>
using namespace std;
class A {
    public:
    int data;


void getdata(){
      cout<<"Enter the value of data:";
      cin>>data;
}

void showdata(){
    cout<<"The value of data is:"<<data<<endl;

}
};
class B{
    public:
    class A a;
    int b;

void getdata(){
    a.getdata();
    cout<<"Enter the value of b:";
    cin>>b;
    
}

void showdata()
{
    a.showdata();
    cout<<"The value of b is:"<<b;

}
};
int main()
{
    B b;
    b.getdata();
    b.showdata();
}


