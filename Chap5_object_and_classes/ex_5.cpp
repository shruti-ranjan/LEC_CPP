#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata();    //function declaration
    void showdata();
};
inline void student::getdata()   //function declaration
{
    cout<<"\nEnter Roll no:";
    cin>>roll;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Phone number:";
    cin>>phone;

}
 inline void student::showdata()
 {
    cout<<"Name:"<<name<<endl;
    cout<<"Roll NO:"<<roll<<endl;
    cout<<"Phone number:"<<phone<<endl;
 }