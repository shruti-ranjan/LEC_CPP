#include<iostream>
using namespace std;

class Vehicle{
    private:
      int platenumber;
     
     public:
     Vehicle(int pnum)
     {
        platenumber = pnum;
        cout<<"The value of platenumber is:"<<platenumber;
     }


    // int getnum(int a)
    // {
    //     platenumber=a;
    //     cout<<"The value of platenumber is:"<<platenumber;
    //     return platenumber;
        // cout<<"Enter the name of scooter:";
        // cin>>platenumber;
        // return platenumber;

    };

int main()
{
    Vehicle scooter(8848);




}