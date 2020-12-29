// Lab2.11.6 (2) Times and durations [B].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
};

int main()
{
    Time startTime, endTime, duration;
    cin >> startTime.hours >> startTime.minutes;
    cin >> endTime.hours >> endTime.minutes;

    int startTimeInMinutes = startTime.hours * 60 + startTime.minutes;
    int endTimeInMinutes = endTime.hours * 60 + endTime.minutes;
    int durationInMinutes = endTimeInMinutes - startTimeInMinutes;

    duration.hours = durationInMinutes / 60;
    duration.minutes = durationInMinutes % 60;

    cout << "\nDuration is " << duration.hours << ":" << duration.minutes;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
