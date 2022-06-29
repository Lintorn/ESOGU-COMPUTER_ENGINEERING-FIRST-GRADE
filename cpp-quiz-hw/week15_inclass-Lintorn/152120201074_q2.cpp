#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
fstream file;

int main()
{
    int numberOfLines = 0;
    string tempLine;
    file.open("textFile.txt", ios::in);
    if (file.is_open())
    {

        while (getline(file, tempLine))
        {
            numberOfLines++;
        }
    }file.close();
    
        
    file.open("textFile.txt", ios::in);
    int i = 0;
    string *ptr = new string[numberOfLines];
    while (getline(file, tempLine))
    {
        
        *(ptr + i) = tempLine;
        i++;
    }file.close();

    for (size_t i = 0; i < numberOfLines; i++)
    {
        cout << "Lines is " << *(ptr + i) << endl;
    }
    return 0;
}

    
