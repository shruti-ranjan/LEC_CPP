#include<iostream>
using namespace std;
 //namespace n1
 namespace n1{
    int x = 2;
    
//function to display the message for namespace n1
void fun()
{
    cout<<"This is fun() of n1"<<endl;


}
 }
 //namespace n2
 namespace n2{
    int x = 5;
     //function to display the message for namespace n2
     void fun()
     {
        cout <<"this is fun() of n2"<<endl;

     }
 }
 

 //driver code
 int main()
 {

    cout<<n1::x <<endl;
    n1::fun();
    cout<<n2::x<<endl;
    n2::fun();
    return 0;
 }