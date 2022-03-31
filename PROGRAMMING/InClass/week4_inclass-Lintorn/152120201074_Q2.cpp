#include <iostream>
using namespace std;

int main(){
    
    //variable declaration
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';
    cout << "Pointer : Demonstrate the use of & and * operator\n";
    cout << "--------------------------------------------------";
    cout << "m =300 \n";
    cout << "fx = 3000.6000006";
    

    cout <<"Using & operator:\n ";
    cout << "---------------------- \n";
    cout<<"address of m: "<< &m << "\n";
    cout<<"address of fx: "<< &fx << "\n" ;
    cout<<"address of cht: "<< (void *) &cht << ;

    // cout<<"Using & and * operator: "<<;
    // cout<<"value at address of m: "<< <<endl;
    // cout<<"value at address of fx: "<< <<endl;
    // cout<<"value at address of cht: "<< <<endl;

    // cout<<"Using only pointer variable: "<<endl;
    // cout<<"address of m: "<< <<endl;
    // cout<<"address of fx: "<< <<endl;
    // cout<<"address of cht: "<<  <<endl;

    // cout<<"Using only pointer operator: "<<endl;
    // cout<<"value at address of m: "<< <<endl;
    // cout<<"value at address of fx: "<< <<endl;
    // cout<<"value at address of cht: "<< <<endl;






    return 0;
}