#include <iostream>
using namespace std;
class counter
{
private:
    unsigned int count;

public:
    counter() // constructor
    {
        count = 0;
    }
    int ret_count()
    {
        return count;
    }
    void operator++() // increment count
    {
        count++;
    }
};
int main()
{
    counter c1, c2;
    cout << "c1=" << c1.ret_count() << endl;
    cout << "c2=" << c2.ret_count() << endl;
    ++c1;
    ++c2;
    ++c2;
    cout << "c1=" << c1.ret_count() << endl;
    cout << "c2=" << c2.ret_count() << endl;
    return 0;
}