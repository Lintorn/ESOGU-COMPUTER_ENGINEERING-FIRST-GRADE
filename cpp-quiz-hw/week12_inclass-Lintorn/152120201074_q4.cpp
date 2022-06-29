#include <iostream>
#include <string>
using namespace std;

string isPalindrome(string str){

    
    int i = 0;
    int j = str.length()- 1;
    // Keep comparing characters while they are same
    while (j > i)
    {
        if (str[i++] != str[j--])
        {
            return "False";
        }else{
            return "True";
        }
    }

}

int main(){

    string str;
    getline(cin,str);

    cout << "Is "<< str << "a Palindrome?"<<endl;
    cout << isPalindrome(str);



}