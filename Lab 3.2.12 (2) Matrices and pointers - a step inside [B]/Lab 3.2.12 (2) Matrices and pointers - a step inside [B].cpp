#include <iostream>
using namespace std;
int main(void) {
	int matrix[10][10] = { };

	// Insert your code here
	int* ptrVector;
	int* colomnHead;
	

	for (int i = 0; i < 10; i++) {
		ptrVector = matrix[i];
		colomnHead = ptrVector;
		for (int j = 0; j < 10; j++) {
			if (i == 0) {
				*colomnHead = j + 1;
			}
			else if (j == 0) {
				*colomnHead = i + 1;
			}
			else {
				*colomnHead = (i + 1) * (j + 1);;
			}

			colomnHead++;
		}
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}
