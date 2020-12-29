#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
};

int main()
{
    Time endTime;

    int hour, startMinute, duration;
    cin >> hour;
    cin >> startMinute;
    cin >> duration;

    int addHours = (startMinute + duration) / 60;
    endTime.minutes = (startMinute + duration) % 60;
    endTime.hours = (hour + addHours) % 24;

    cout << "\nEnd time is " << endTime.hours << ":" << endTime.minutes;

}