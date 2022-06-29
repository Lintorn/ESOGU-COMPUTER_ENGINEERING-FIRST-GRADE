#include <iostream>
using namespace std;

int main(){
 /* There are three variables which are can be integer pointer or just integer. Their
names are A, B, and C. These variables dependent each other. So, to the write code about this
relation some information are given such as:
• A’s value is 100 and it can be reached directly,
• B, contains the address of A variable
• C, contains the address of B.

    so A is plain integer B is integer pointer and C is pointers pointer
 */
    int A= 100;
    int* B= &A; //contains the address of A
    int** C = &B;
    cout << "Adress of A is "<< &A<< endl<< "Adress of B is"<< &B<<endl;
    cout << "Value of A is "<< A <<endl << "Value of B is "<< B<<endl;
    cout << "B reference to "<< *B << endl<< "C reference to "<< **C <<endl;
    
    



    return 0;
}