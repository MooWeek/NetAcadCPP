#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	int maxball;
	int ballsno;
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));

	// Insert your code here

	srand(time(NULL));
	for (int i = 0; i < ballsno; i++) {
		int rnd = rand() % maxball + 1;
		cout << rnd << " ";
	}


	return 0;
}
