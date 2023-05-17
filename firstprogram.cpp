#include<iostream>
using namespace std;
class student{
    int age;
    int rollno;
    char assign[30];
    public:
    void read(){
        cout<<"Enter your age";
        cin>>age;
        cout<<"Enter your roll no";
        cin>>rollno;

    }
    void assignment(){
        cout<<"Has the student completed the assignment or not[yes/no]";
        cin>>assign;

     }
     void info(){
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Assignment completion status:"<<endl<<assign;
     }
};
     int main(){
         student ram ,shyam;
         cout<<"student:Ram"<<endl;
    
         ram.read();
         ram.assignment();
         ram.info();
         cout<<"student:Shyam"<<endl;
         shyam.read();
         shyam.assignment();
         shyam.info();


     }




