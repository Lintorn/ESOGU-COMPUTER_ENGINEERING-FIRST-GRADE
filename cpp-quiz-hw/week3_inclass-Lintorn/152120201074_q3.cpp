#include <iostream>
using namespace std;

void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){

    int a,b;
    //take input from user
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    // call the swap function
    swap(a,b);

    // display the var
    cout << "first number: "<< a << "\n" << "second number: " << b;


}