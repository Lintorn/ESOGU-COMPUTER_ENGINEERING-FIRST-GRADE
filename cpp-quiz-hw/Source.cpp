#include <iostream>
#include <string>
#include<sstream>
using namespace std;

void HighestNumberOfRepeatedLetters(string input)

{
	// first turn upper letters to lower letters
	for (int i = 0; i < input.length(); i++)
	{
		input[i] = tolower(input[i]);
	}

	
	
	istringstream iss(input);
	string strArray[6];
	int index = 0;
	string temp;
	while (getline(iss, temp, ' '))
	{
		strArray[index] = temp; 
		index++;
	}

	int cnt = 0;
	string result = "";
	for (int i = 0; i < 6; i++)
	{
		int counter = 0;
		for (int j = 0; j < strArray[i].length(); j++)
		{

			for (int k = j + 1; k < strArray[i].length(); k++)
			{
				if (strArray[i].at(j) == strArray[i].at(k))
				{
					counter++;
				}
			}
			if (counter > cnt) {

				cnt = counter;
				result = strArray[i];
			}
		}


	}
	cout << "Output: " << result << endl;
}

int main()
{
	cout << "Given string: Welcome text in a separate line "<< endl;
	HighestNumberOfRepeatedLetters("Welcome text in a separate line");
}


