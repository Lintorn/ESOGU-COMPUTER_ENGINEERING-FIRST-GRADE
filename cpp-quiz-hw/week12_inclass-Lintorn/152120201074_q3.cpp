#include <iostream>
#include <string>
using namespace std;

void insertDash(string &str)
{
    for (int i = 0; i < str.length() - 1; i++)
        if (str[i] % 2 == 1 && str[i + 1] % 2 == 1)
            str.insert(i + 1, "-"), i++;
}

int main()
{
    string index= "keremcan";
    cout <<index.length();
    
    // Declaring strings
    string str;

    // Getting input form user
    getline(cin, str);

    // Printing inputs and results
    cout << "Input: " << str << endl;
    insertDash(str);
    cout << "Result -> " << str << endl;
    return 0;

}