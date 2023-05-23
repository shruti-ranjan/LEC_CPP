#include<iostream>
using namespace std;
int main()
{
    int student;
    cout<<"Enter the roll no of the student :";
    cin>>student;
    cout<<"Name of the student is:";
    switch(student)
    {
        case 1 :
         cout<<"Shruti Ranjan";
         break;
        case 2 :
        cout<<"Pabitra TIwari";
         break;
        case 3 :
         cout<<"Niruja Bhandari";
         break;
        case 4:
        cout<<"Sanjina Devi Shakya";
        break;
    default:
    cout<<" not in the list";
    break;
    }

}
