#include<iostream>
using namespace std;

class Room {
    public:
    int length;
    int breadth;
    int height;

    void calculateArea(int a,int b) {
        length = a;
        breadth = b;
        cout<<"The area of the room is:"<< length * breadth<<endl;

    }
    void calculateVolume(int a, int b,int c) {
        height = c ; 
          cout<<"The volume of the room is:"<<length * breadth * height;

    }
};
    int main(){
    Room obj401;

    //calculate and display the area and volume of the room
    obj401.calculateArea(10,20);
    obj401.calculateVolume(10,20,30);

    

 }
    
