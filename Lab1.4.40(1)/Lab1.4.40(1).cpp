#include <iostream>

using namespace std;

int main(void) 
{
	float pi = 3.14159265359;
	float x, y;
	cout << "Enter value for x: ";
	cin >> x;

	float dx = x * x;
	float dpi = pi * pi;
	float dn = (float)1 / (float)2;

	float a = (dx) / (dpi * (dx + dn));
	float b = 1 + (dx) / (dpi * ((dx - dn) * (dx - dn)));
	y = a * b;
	// put your code here


	cout << "y = " << y;
	return 0;
}
