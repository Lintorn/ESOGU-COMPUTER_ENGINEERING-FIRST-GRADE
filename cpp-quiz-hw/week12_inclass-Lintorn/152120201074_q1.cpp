#include <iostream>
#include <string>
using namespace std;

int main(){
    //dynamic memory allocation
    int *intPtr = new int;
    float *floatPtr = new float;
    char *charPtr = new char;
    string *stringPtr = new string;

    // take inputs
    cout << "Enter a value of integer: ";
    cin>> *intPtr;

    cout << "Enter a value of float: ";
    cin>>*floatPtr;

    cout << "Enter a value of char: ";
    cin >> *charPtr;

    cout << "Enter a value of string: ";
    cin>>*stringPtr;

    //printing the values
    cout<<endl<<endl<<"Values belonging to types:";
    cout << "The value of integer: " << *intPtr << endl;
    cout << "The value of float: " << *floatPtr << endl;
    cout << "The value of char: " << *charPtr << endl;
    cout << "The value of string: " << *stringPtr << endl;


    
    return 0;
}