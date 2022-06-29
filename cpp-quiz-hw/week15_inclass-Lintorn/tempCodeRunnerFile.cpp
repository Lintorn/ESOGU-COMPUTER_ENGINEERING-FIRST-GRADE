#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
fstream file;

int main()
{

    file.open("textFile.txt", ios::in);
    if (file.is_open())
    {
        int numberOfLines = 0;
        string tempLine;
        while (getline(file, tempLine))
        {
            numberOfLines++;
        }
        int i=0;
        string *tempLines = new string[numberOfLines];
        while (getline(file,tempLine))
        {
            tempLines[i] = tempLine;
            i++;
        }

        for (size_t i = 0; i < numberOfLines; i++)
        {
            cout << "Lines is "<<tempLine[i]<<endl;
        }
        
        
    }file.close();

    return 0;
}