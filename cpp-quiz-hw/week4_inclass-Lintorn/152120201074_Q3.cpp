#include <iostream>
using namespace std;

int main(){
    // variable and pointer declaration

    int a = 10;
    int* p = &a;
    int** pp = &p;
    //first step
    cout << "address of a: " << &a << endl << "address of p: " << &p << endl << "address of pp: " << &pp <<endl;

    // value printing
    cout << "value stored at a: "<< a << endl << "value stored at p: " << p << endl <<  "value stored at pp: " << pp << endl;

    // references
    cout << "a reference to: "<< a << endl << "p reference to: "<< *p <<endl << "pp reference to: " << **pp<<endl;


    return 0;
}