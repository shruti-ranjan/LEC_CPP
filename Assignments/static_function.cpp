#include <iostream>
using namespace std;
class Math {
public:
    static int add(int a, int b) {          //static function
        return a + b;                           //static function can be called without creating objects of the class
    }

    static int multiply(int a, int b) {    //static function
        return a * b;
    }
};  //end of class

    int getdata()     //non member function
    {
        int x;
        cout<<"Enter the number:"<<endl;
        cin>>x;
        return x;
    }


int main() {
    int num1,num2;
    num1= getdata();
    num2= getdata();

    int sum = Math::add(num1, num2);
    int product = Math::multiply(num1, num2);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
