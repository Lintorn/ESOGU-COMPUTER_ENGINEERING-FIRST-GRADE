#include <iostream>
using namespace std;

int main(){
    // variable and pointer declaration
    int* ab;
    int m = 29;
    ab = &m;
    // step 1
    cout << "Now ab is assigned with the adress of m. \n";
    cout << "Adress of pointer ab: " << ab << "\n" ;
    cout << "Content of pointer ab: " << *ab << "\n\n";

    // value of m changes
    m = 34;
    cout << "The value of m assigned to 34 now\n";
    cout << "Address of pointer ab: " << ab<< "\n";
    cout << "Content of pointer ab: " << *ab<< "\n\n";

    // change the value of m using pointer ab
    *ab = 7;
    cout<< "The pointer variable ab is assigned to 7 now\n";
    cout << "Address of m: " << ab << "\n";
    cout << "Value of m: " << m;







    return 0;
}