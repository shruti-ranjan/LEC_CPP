#include<iostream>
using namespace std;
class mobile{
   int m=10;
   public:
   void display(){
    
       cout<<"The value of m is:"<<m<<endl;
       cout<<"Value of ? is:"<<this ->m<<endl;
       cout<<"The address of current object is :"<<this<<endl;
    
   }
};

int main()
{
     mobile m1,m2;
     m1.display();
     m2.display();

}