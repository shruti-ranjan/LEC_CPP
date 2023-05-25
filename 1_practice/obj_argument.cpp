#include<iostream>
using namespace std;

class Student {
    public:
    double marks;

//constructor to initialize marks
Student(double m) {
    marks = m;
}
};

//we are making a function which takes object as an argument

void calculateaverage(Student s1, Student s2){
    double average = (s1.marks + s2.marks) /2;
    cout<<"the average marks of two students is"<<average<<endl;
}
int main()
{
    Student student1(100.0), student2(200.5);
    //to pass the object as an argument
    calculateaverage(student1, student2);
    return 0;
}