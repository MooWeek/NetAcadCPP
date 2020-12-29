#include <iostream>
using namespace std;
int main(void) {
	int sys;
	float m, ft, in;
	// Insert your code here

	cout << "Chose system:\n\t0 - metric\n\t1 - imperial\n";
	cin >> sys;
	if (sys == 0) {
		cin >> m;

		in = m * 39.37007874;
		ft = (int)in / 12;
		in = in - (float)ft * 12.0;

		cout << (int)ft << "'" << in << "''";
	}
	else if (sys == 1) {
		cin >> ft;
		cin >> in;

		in = in + ft * 12.0;
		m = in / 39.37007874;
		cout << m << "m";
	}



	return 0;
}
