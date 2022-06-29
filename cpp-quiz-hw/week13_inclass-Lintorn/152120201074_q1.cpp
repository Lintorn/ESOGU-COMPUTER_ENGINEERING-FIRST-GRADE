#include <iostream>
#include <string>
using namespace std;

void swap(string *str1, string *str2){
    string temp;
    temp = *str1;
    *str1 = *str2; 
    *str2 = temp; 
}

int main(){
    string str1,str2; //define two strings.
    cout<<"Enter first string: ";
    cin>>str1; //get string 2 from user.
    cout<<"Enter second string: ";
    cin>>str2; //get string 2 from user.
    cout<<endl<<"Before the swap function strings are: "<<endl;
    cout<<"First string is: "<<str1<<endl;
    cout<<"Second string is: "<<str2<<endl<<endl;

    swap(&str1,&str2); //call function.

    cout<<"After function: "<<endl;
    cout<<"First string is: "<<str1<<endl;
    cout<<"Second string is: "<<str2<<endl<<endl;

    return 0;
}