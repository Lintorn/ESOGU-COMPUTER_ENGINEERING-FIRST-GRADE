#include <iostream>
using namespace std;

int main() {
	//Define Array A and B . and fill the array A
	int A[10];
	int B[5];
	cout << "enter 10 index for array\n";
	//Fill the array A with user input
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	//fill the array B with multiplication of two values (x, y)
	//by going forward and backward according to their indices in array B one by one.
	for (size_t i = 0; i < 5; i++)
	{

		B[i] = A[i] * A[9 - i];

	}
	// Check if there are any same value in arrB than change it to -1
	for (int i = 0;i < 5;i++) {
		int value;
		value = B[i];
		if (value == B[i + 1]) {
			B[i] = -1;
		}

	}

	//
	for (size_t i = 0; i < 5; i++)
	{
		cout << B[i] << ' ';
	}
}	