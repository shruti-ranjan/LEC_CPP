#include <iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a cube
int calculateArea(int length) {
    return 6 * length * length;
}
 // Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    int choice;
    cout << "Choose the shape:\n";
    cout << "1. Cube\n";
    cout << "2. Circle\n";
    cout << "3. Rectangle\n";
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
        cout << "Invalid choice. Please choose a valid option." << endl;
    }

    return 0;
}
