#include<iostream>
using namespace std;

void add(int a, int b)
{
    cout<<"Sum :"<<(a+b) <<endl;

}
void add(int a,int b,int c)
{
cout<<"Sum: " <<(a+b+c) ;
}
int main()
{
    add(20, 30);
    add(40, 50, 60);
    return 0;
}