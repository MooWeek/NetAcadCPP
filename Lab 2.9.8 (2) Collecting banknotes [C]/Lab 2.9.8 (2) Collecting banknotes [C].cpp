#include <iostream>

using namespace std;

int main()
{
    int money, baknote50, baknote20, baknote10, baknote5, baknote1;
    cout << "Enter money: ";
    cin >> money;

    baknote50 = money / 50;
    money %= 50;

    baknote20 = money / 20;
    money %= 20;

    baknote10 = money / 10;
    money %= 10;

    baknote5 = money / 5;
    money %= 5;

    baknote1 = money / 1;
    money %= 1;


    cout << "\n\nBanknotes is: ";

    for (int i = 0; i < baknote50; i++)
        cout << "50 ";
    for (int i = 0; i < baknote20; i++)
        cout << "20 ";
    for (int i = 0; i < baknote10; i++)
        cout << "10 ";
    for (int i = 0; i < baknote5; i++)
        cout << "5 ";
    for (int i = 0; i < baknote1; i++)
        cout << "1 ";
}