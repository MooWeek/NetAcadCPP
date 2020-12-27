// Lab 2.3.19 (1) Collatz's hypothesis [B].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int c0, steps = 0;

    cin >> c0;

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = c0 / 2;
        }
        else {
            c0 = 3 * c0 + 1;
        }
        cout << endl << c0;
        steps++;
    }

    cout << endl << "Steps = " << steps;
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
