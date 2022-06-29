#include <iostream>
using namespace std;

int main(){

    // initialize values
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

     cout<<"Using & operator: "<<endl;
    cout<<"address of m: "<< &m <<endl;
    cout<<"address of fx: "<< &fx <<endl;
    cout<<"address of cht: "<< (void *) &cht <<endl; // this is how you get the adress of a char variable 

    // i have no idea what to do after this part

    // cout<<"Using & and * operator: "<<endl;
    // cout<<"value at address of m: "<< m<<endl;
    // cout<<"value at address of fx: "<< fx<<endl;
    // cout<<"value at address of cht: "<< endl;

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