#include<iostream>
using namespace std;
class Account{
    public:
    float salary = 600000;
    float vacation = 600;
    Account(){
        cout<<"THIS IS ACCOUNT";
    }
};//base class
class Programmer: public Account{

};
 int main(){
    Account Account1;
    return 0;


 }