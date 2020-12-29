#include <iostream>
using namespace std;
int main(void) {
	int n;
	cout << "Enter size of square: ";
	cin >> n;
	while (n < 2) {
		cout << "Enter another number(min = 2): ";
		cin >> n;
	}
	n = n - 2;
	cout << '+';
	for (int i = 0; i < n; i++)
		cout << '-';
	cout << '+' << endl;
	for (int i = 0; i < n; i++) {
		cout << '|';
		for (int j = 0; j < n; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for (int i = 0; i < n; i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}
