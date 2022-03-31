#include <iostream>
using namespace std;

int main(){
    int a=10;int b,o;
    int* z;

    z = &a;
    cout << "a=10, b and o are two integer variable and *z is an integer\n";
    cout << "z stores the adress of a = " << z << "\n";
    cout << "*z stores the value of a = " << *z << "\n";
    cout << "&b stores the adress of b = " << &b << "\n";
    cout << "&o stores the adress of o = " << &o << "\n";
    cout << "&z stores the adress of z = " << &z << "\n";

    return 0;
}
