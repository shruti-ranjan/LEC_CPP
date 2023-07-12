#include<iostream>
using namespace std;

class friends{
    public:
    char name[50];
    char address[80];
    int phone;

       void getdata()
       {
        cout<<"My friend's name is:";
        cin>>name;
        cout<<"My friend's phone number is:";
        cin>>phone;
        cout<<"My friend's address is:";
        cin>>address;

       }
       void showdata()
       {
        cout<<"Name:"<<name<<endl;
        cout<<" Address:"<<address<<endl;
        cout<<"Phone number:"<<phone<<endl;

       }

};
    int main()

    {
        friends p,n,k;
        p.getdata();
        p.showdata();
        n.getdata();
        n.showdata();
        k.getdata();
        k.showdata();
      
    }