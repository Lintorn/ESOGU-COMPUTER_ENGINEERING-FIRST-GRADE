#include <iostream>
using namespace std;

int main() {
	//define arrays
	int A[5] = { 0 }; int B[5] = { 0 }; int C[5] = { 0 };
	

	//Take input from user and implement it do arrays
	cout << "Enter data for first array A" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];
	}
	cout << "Enter data for second array B" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> B[i];
	}

	//reversing the elements of array B
	int temp;
	for (int i = 0,j = 4; i>0 ; i++, j--)
	{
		temp = B[i];
		B[i] = B[j];
		B[j] = temp;
	}
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << B[i];
	//}
	
	// print the sum of two array
	for (int i = 0; i < 5; i++)
	{
		C[i] = A[i] + B[i];
		cout << C[i] << " ";
	}
	

	system("pause");
}
