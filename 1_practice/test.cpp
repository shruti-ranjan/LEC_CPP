// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "HELLO WORLD!!!!!";
// }

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "The sum is:" << sum(a, b);
}
