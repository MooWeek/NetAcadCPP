#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Collection {
	int elno;
	int* elements;
};

void AddToCollection(Collection& col, int element) {
	// Insert your code here

	int n = col.elno;
	if (n == 0) {
		int newSize = n + 1;
		col.elno = newSize;

		int* array = new int[newSize];

		array[0] = element;
		col.elements = array;
	}
	else {
		int newSize = n + 1;
		col.elno = newSize;

		int *array = new int[newSize];

		for (int i = 0; i < newSize - 1; i++) {
			array[i] = col.elements[i];
		}
		array[newSize - 1] = element;
		col.elements = array;
	}
}

void PrintCollection(Collection col) {
	cout << "[ ";
	for (int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void) {
	Collection collection = { 0, NULL };
	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for (int i = 0; i < elems; i++)
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete[] collection.elements;
	return 0;
}