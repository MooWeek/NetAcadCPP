#include <iostream>

using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13, 4 };
	int n = sizeof(vector) / sizeof(vector[0]);

	// Insert your code here

	int* ptrVector = vector;
	int* head = ptrVector;
	int* tail = ptrVector + (n - 1);

	int* min = ptrVector;

	while (*head != *tail) {
		head++;

		if (*head < *min)
			min = head;
	}
	if (*tail < *min)
		min = tail;


	cout << "Min element is: " << *min;

	return 0;
}
