// Lab 2.3.19 (8) Do it yourself factorials [A].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// В условии в первом примере есть ошибка:   5! = 10 должно быть  5! = 120
int main()
{
    int num;
    unsigned long long int result = 1;
    cin >> num;

    if (num == 0 || num == 1)
        result = 1;
    else {
        for (int i = 1; i <= num; i++) {
            result = result * i;
        }
    }

    cout << num << "! = " << result;
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
