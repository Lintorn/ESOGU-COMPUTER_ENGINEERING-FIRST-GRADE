#include <iostream>
using namespace std;

int main(){
    
    int X = 100; int Y= 100;
    int* Z;
    Z = &X;

    cout << "Initial values--\n"<<"Variable X: " << X << "\t"<< "Variable Y: " << Y <<"\t"<< "Variable Z: " << *Z;

    X = 50;

    cout << "\nAfter change--\n"<<"Variable X: " << X << "\t"<< "Variable Y: " << Y <<"\t"<< "Variable Z: " << *Z;


    return 0;
}