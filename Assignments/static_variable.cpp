#include <iostream>
using namespace std;

void increment() {
    static int count = 0;  // Static variable declaration and initialization
    
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    increment();
    increment();
    increment();
    increment();
    
    
    return 0;
}
