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
	/* for (int i = 0;i < 5;i++) {
		// int value;
		// value = B[i];
		if (B[i] == B[i + 1]) {
			B[i] = -1;
		}

	} this loop only finds the same value if it they are next to each other */

	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if(B[i]==B[j]){
				B[j] = -1;
			}
		}
		
	} /* this loops works like this  b0 b1,, b0 b2,, b0 b3,, b0 b4/

	





	for (size_t i = 0; i < 5; i++)
	{
		cout << B[i] << ' ';
	}
}	