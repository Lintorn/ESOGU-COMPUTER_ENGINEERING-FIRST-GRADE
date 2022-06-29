#include <iostream>
#include <string>
using namespace std;

int main(){
    string favLec[10];

    for (size_t i = 0; i < 10; i++)
    {
        cout <<"Enter "<<i+1<<".th favorite lesson of yours ";
        cin>> favLec[i];
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout << "The string "<<i<<". th index value is "<< favLec[i]<<endl;
    }
    

    


    return 0;
}