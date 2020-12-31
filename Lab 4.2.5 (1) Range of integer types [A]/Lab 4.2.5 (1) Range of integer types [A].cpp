#include <iostream>

using namespace std;

int sumOfNumbers(int number) 
{
    int sum = 0;
    for (int i = number; i > 0; i--) 
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;
    cin >> number;

    cout << sumOfNumbers(number);
}