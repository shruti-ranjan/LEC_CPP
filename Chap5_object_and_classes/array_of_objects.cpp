#include<iostream>
using namespace std;

class Student{
    int rollno;
    string name;

public:
 void getdata()
 {
    cout<<"Enter the roll no:"<<endl;
    cin>>rollno;
    cout<<"Enter tha name"<<endl;
    cin>>name;
 }
  
  void showdata()
  {
    cout<<"Rollno:"<<rollno;


  }


};
int main()
{
    Student s[5];
    for (int i=0;i<5;i++){
        s[i].getdata();

    }
    cout<<"Info of students:"<<endl;
    for(int j=0;j<5;j++)
    {
        s[j].getdata();
    }
}