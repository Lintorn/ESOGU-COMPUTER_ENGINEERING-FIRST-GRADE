#include <iostream>
#include <algorithm>
using namespace std;
 
// Function to reverse the given string
string reverseString(string str)
{
 
    // Reverse str using inbuilt function
    reverse(str.begin(), str.end());
 
    // Add space at the end so that the
    // last word is also reversed
    str.insert(str.end(), ' ');
    
    int n = str.length();
    int j = 0;
 
    // // Find spaces and reverse all words
    // // before that
     for (int i = 0; i < n; i++) {
 
    //     // If a space is encountered
         if (str[i] == ' ') {
            reverse(str.begin() + j,
            str.begin() + i);
 
    //         // Update the starting index
    //         // for next word to reverse
            j = i + 1;
     }
    } 
 

    // str.pop_back();
    cout << str;
}



int main()
{
    string str = "Keremcan Seker Quiz 4";
 
    reverseString(str);
    string hede = "nasil";
    reverse(hede.begin(),hede.end()+5);
    cout <<hede;
    

    return 0;
}
