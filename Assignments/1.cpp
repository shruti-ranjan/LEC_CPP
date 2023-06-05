#include <iostream>
using namespace std;

class MyClass {
  int myAttribute;

public:
  MyClass(int value) {
    myAttribute = value;
  }

  void setAttribute(int value) {
    myAttribute = value;
  }

  int getAttribute() {
    return myAttribute;
  }
};   //end of class

void mynonMemberFunction(MyClass obj) {
  cout << "Non-member function: " << obj.getAttribute() << endl;
}

int main() {
  MyClass myObject(88);
  cout << "Initial attribute value: " << myObject.getAttribute() << endl;

  myObject.setAttribute(99);
  cout << "Updated attribute value: " << myObject.getAttribute() << endl;

  mynonMemberFunction(myObject);

  return 0;
}
