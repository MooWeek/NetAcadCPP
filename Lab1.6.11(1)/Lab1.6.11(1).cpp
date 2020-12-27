#include <iostream>

using namespace std;

int main(void) {
	bool answer = false;
	int value;
	cout << "Enter a value: ";
	cin >> value;

	if (value >= 0 && value < 10) 
	{
		answer = true;
	}
	else if (value * 2 < 20 && value - 2 > -2)
	{
		answer = true;
	}
	else if (value - 1 > 1 && value / 2 < 10)
	{
		answer = true;
	}
	else if(value == 111)
	{
		answer = true;
	}

	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
	return 0;
}