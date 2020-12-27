// Lab 2.1.5 (4).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int year, month, day, weekDay;

    cin >> year;
    cin >> month;
    cin >> day;

    month -= 2;
    if (month < 0)
    {
        month += 12;
        year--;
    }
    month = month * 83 / 32;
    month += day;
    month += year;
    month += year / 4;
    month -= year / 100;
    month += year / 400;
    weekDay = month % 7;

    cout << endl << weekDay;

    switch (weekDay) {
        case 0:
        {
            cout << " - Sunday";
            break;
        }
        case 1:
        {
            cout << " - Monday";
            break;
        }
        case 2:
        {
            cout << " - Tuesday";
            break;
        }
        case 3:
        {
            cout << " - Wednesday";
            break;
        }
        case 4:
        {
            cout << " - Thursday";
            break;
        }
        case 5:
        {
            cout << " - Friday";
            break;
        }
        case 6:
        {
            cout << " - Saturday";
            break;
        }
    }
    return 0;
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
