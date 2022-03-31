#include <iostream>
using namespace std;

int main(){

    int a,b;
    int* ptrA;
    int* ptrB;
    // ask user for 2 integers
    cout << "enter two integers for a and b\n";
    cin >> a;
    cin >> b;
    ptrA = &a;
    ptrB = &b;
    cout << "value of a = "<< *ptrA << "\n"<<"value of b = "<< *ptrB << "\n";



    return 0;
}