#include <iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159;

int calculateArea(int length)            //funtion to calculate area of the cube
{
    return 6 * length * length;
}

double calculateArea(double radius)       // Function to calculate the area of a circle
 {
    return PI * pow(radius, 2);
}

double calculateArea(double length, double breadth)    //function to calculate area of the rectangle

 {
    return length * breadth;
}

int main() {
    int choice;
    cout << "Choose the shape:"<<endl;
    cout << "1. Cube"<<endl;
    cout << "2. Circle"<<endl;
    cout << "3. Rectangle"<<endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        int length;
        cout << "Enter the length of the cube: ";
        cin >> length;
        cout << "Area of the cube: " << calculateArea(length) << endl;
    } else if (choice == 2) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of the circle: " << calculateArea(radius) << endl;
    } else if (choice == 3) {
        double length, breadth;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the breadth of the rectangle: ";
        cin >> breadth;
        cout << "Area of the rectangle: " << calculateArea(length, breadth) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
