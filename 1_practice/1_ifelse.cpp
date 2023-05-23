#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter three integers:";
    cin>>num1>>num2>>num3;
    if(num1>num2)
     if(num1>num3)
      cout<<num1<<"Is the largest";
      else
       cout<<num3<<"Is the largest";
    else 
     if(num2>num3)
      cout<<num2<<"Is the largest";
    else
      cout<<num3<<"Is the largest";
    system("pause");
    return 0;

}
