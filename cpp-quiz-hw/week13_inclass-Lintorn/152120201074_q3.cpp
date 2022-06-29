#include <iostream>
#include <string>
using namespace std;

int main(){

    string *favLec = new string[10];

    for (size_t i = 0; i < 10; i++)
    {
        cout <<"enter a lesson name:  ";
        getline(cin,favLec[i]);
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        cout << "one of your best lecture: "<< favLec[i]<<endl;

    }
    
    delete[] favLec;

    return 0 ;
}