#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
	string temp = str;
	int i = 0;

	for (int x = temp.length()-1; x >= 0; x--)
	{
		str[i] = temp[x];
		i++;
	}
	return str;
}

int main() 
{
	cout << "Original string: Keremcan Seker"; 
	cout << "\nReverse string: " << reverseString("Keremcan Seker") <<endl;

	return 0;
}
