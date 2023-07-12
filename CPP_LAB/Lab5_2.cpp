#include <iostream>
using namespace std;
class Time
{
private:
    int hr, min, sec;

public:
    Time() // default constructor
    {
        hr = 12;
        min = 0;
        sec = 0;
    }
    Time(int seconds) // parameterized constructor
    {
        hr = seconds / 3600;         // calculates hour
        min = (seconds % 3600) / 60; // calculates min
        sec = (seconds % 3600) % 60; // calculates sec
    }
    Time(Time &obj) // copy constructor
    {
        hr = obj.hr;
        min = obj.min;
        sec = obj.sec;
    }
    void display()
    {
        cout << "Time: " << hr << " hr " << min << " min " << sec << " sec" << endl;
    }
};

int main()
{
    Time t1;

    t1.display();
    int seconds;
    cout << "Enter the time in seconds:";
    cin >> seconds;
    Time t2(seconds);
    t2.display();
    Time t3 = t2;
    t3.display();
    return 0;
}