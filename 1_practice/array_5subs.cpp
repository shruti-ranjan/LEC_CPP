#include<iostream>
using namespace std;

int main()
{
    string sub[]={"OOP","TOC","EDC","ECT","EM"};
    int marks [5];
    int i,total;

    for(i=0;i<5;i++)
    {
        cout<<"\nEnter the marks of subject :"<<sub[i]<<" : ";
        cin>>marks[i];
    }
    for(i=0;i<5;i++)
    {
      total+=marks[i];
    }
    cout<<"\nTotal Marks:" <<total;
    return 0; 
    
    }

    