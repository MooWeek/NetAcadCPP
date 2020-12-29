#include <iostream>

using namespace std;

int main()
{
    int operation, a, b, result;

    cout << "\nMENU:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice ?\n";
    cin >> operation;

	while (operation != 0) {
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;

		switch (operation)
		{
		case 1: {
			result = a + b;
			break;
		}
		case 2: {
			result = a - b;
			break;
		}
		case 3: {
			result = a * b;
			break;
		}
		case 4: {
			if (b == 0) {
				cout << "Error!!! Division by 0!";
				result = 0;
				break;
			}
			result = a + b;
			break;
		}
		default: {
			cout << "Incorrect operation!";
			break;
		}
		}

		cout << "\nResult is " << result;

		cout << "\n\n\nMENU:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice ?\n";
		cin >> operation;
	}
}