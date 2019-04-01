// Tutorial #11 program
// Cole Lamothe 100711084

#include<iostream>
#include<time.h>

using namespace std;

int main() {
	srand(time(NULL));

	const int SIZE = 10;
	int randArray[SIZE]; // initialize a 10 element integer array

	for (int i = 0; i < SIZE; i++) { // assigns each element a random number
		randArray[i] = rand();
	}

	// even index elements
	cout << "Even index elements: ";
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			cout << randArray[i] << " ";
		}
	}
	cout << endl; // spacing elements
	// even elements
	cout << "Even elements: ";
	for (int i = 0; i < SIZE; i++) {
		if (randArray[i] % 2 == 0) {
			cout << randArray[i] << " ";
		}
	}
	cout << endl;
	// all elements in reverse order
	cout << "Elements in reverse order of the array: ";
	for (int i = SIZE-1; i >= 0; i--) {
		cout << randArray[i] << " ";
	}
	cout << endl;
	// first and last element
	cout << "First element: " << randArray[0] << " Last element: " << randArray[SIZE - 1] << endl;

	system("pause");
	return 0;
}