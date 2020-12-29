// Lab 2.3.19 (6) Postcard from Gizah [B].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter height of triangle: ";
	cin >> n;
	while (n < 2) {
		cout << "Enter another number(min = 2): ";
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i - 1; j < n; j++) {
			cout << " ";
		}

		if (i == 0) {
			cout << "*";
		}
		else if (i == n - 1) {
			for (int j = 0; j < i * 2 + 1; j++) {
				cout << "*";
			}
		}
		else {
			cout << "*"; 
			
			for (int j = 0; j < i * 2 - 1; j++) {
				cout << " ";
			}

			cout << "*";
		}

		for (int j = i - 1; j < n; j++) {
			cout << " ";
		}
		cout << endl;
	}
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
