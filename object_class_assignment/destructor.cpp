#include <iostream>
using namespace std;

class MyClass {
  public:
    MyClass() { // Constructor
      cout << "Hello World!"<<endl;
    }
    ~MyClass() { // Destructor
      cout << "Byebye World!";
    }
};

int main() {
  MyClass myObj; // Creating  an object of MyClass (this will call the constructor)
  return 0;
}