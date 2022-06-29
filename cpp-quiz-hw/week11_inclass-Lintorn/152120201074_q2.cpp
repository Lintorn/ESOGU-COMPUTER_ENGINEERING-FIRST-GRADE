#include <iostream>
#include <string>

using namespace std;

string capitalize(string a) {

	for (int i = 0; i < a.length(); i++)
	{
		if (i == 0)
		{
			a[i] = toupper(a[i]);
		}
		else if (a[i] == ' ')
		{
			a[i+1] = toupper(a[i+1]);
		}
	}

	return a;
}

int main() 
{
	cout << capitalize("keremcan seker")<<endl;
	return 0;
}
