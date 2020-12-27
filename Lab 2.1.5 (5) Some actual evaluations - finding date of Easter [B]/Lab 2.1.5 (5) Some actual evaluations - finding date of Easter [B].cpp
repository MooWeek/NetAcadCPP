// Lab 2.1.5 (5) Some actual evaluations - finding date of Easter [B].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int year, a, b, c, d, e;

    cin >> year;

    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = (a * 19 + 24) % 30;
    e = (2 * b + 4 * c + 6 * d + 5) % 7;

    if (d + e < 10)
        cout << "\nMarch " << d + e + 22;
    else
        cout << "\nApril " << d + e - 9;
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
