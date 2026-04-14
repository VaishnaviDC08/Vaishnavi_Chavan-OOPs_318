#include<iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void getTime()
    {
        cout << "\nEnter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    void printTime()
    {
        cout << "\nHour: " << hour;
        cout << "\nMinute: " << minute;
        cout << "\nSecond: " << second;
    }

    Time addTime(Time x, Time y);
};

Time Time::addTime(Time x, Time y)
{
    Time z;

    z.second = x.second + y.second;
    z.minute = x.minute + y.minute;
    z.hour   = x.hour + y.hour;


    if (z.second >= 60)
    {
        z.minute += z.second / 60;
        z.second = z.second % 60;
    }

    if (z.minute >= 60)
    {
        z.hour += z.minute / 60;
        z.minute = z.minute % 60;
    }

    return z;
}

int main()
{
    Time t1, t2, t3;

    t1.getTime();
    t2.getTime();

    cout << "\nTime 1:";
    t1.printTime();

    cout << "\nTime 2:";
    t2.printTime();

    t3 = t3.addTime(t1, t2);

    cout << "\nAdded Time:";
    t3.printTime();

    return 0;
}
