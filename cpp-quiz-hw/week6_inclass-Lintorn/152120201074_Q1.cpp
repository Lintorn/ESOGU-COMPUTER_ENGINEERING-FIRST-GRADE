#include <iostream>
using namespace std;
#define N 5
int main(){

    int arrInteger[N]={1,2,3,4,5};
    int* ptrInteger = arrInteger;
    char arrChar[N]= {'a','b','c','d','e'};
    char* ptrChar = arrChar;
    double arrDouble[N]={1.1, 2.2, 3.3, 4.4, 5.5};
    double* ptrDouble = arrDouble;


    // using integer array
    cout << "Using Integer Array => " << "arrInteger(1,2,3,4,5)"<<endl;
    for (size_t i = 0; i < N; i++)
    {
        cout<< "arrInteger => "<< i<<".th value : "<< arrInteger[i]<< " address : "<< &arrInteger[i]<<endl;
    }
    
    //using pointer integer
    cout << endl<< "Using Pointer Integer "<<endl;
    for (size_t i = 0; i < N; i++)
    {
        cout<< "ptrInteger => "<< i<<".th value : "<< *(ptrInteger + i)<< " address : "<< ptrInteger + i<<endl;
    }

    //using char array
    cout <<endl<< "Using Char array => arrChar(a,b,c,d,e)"<<endl;
    for (size_t i = 0; i < N; i++)
    {
        cout<< "arrChar => "<< i<<".th value : "<< arrChar[i] << " address : "<<(void*) &arrChar[i]<<endl;
    }


    //using char pointer
    cout <<endl<< "Using Char Pointer"<<endl;
    for (size_t i = 0; i < N; i++)
    {
      cout<< "ptrChar => "<< i<<".th value : "<< *(ptrChar + i) << " address : "<< (void*) (ptrChar + i)<<endl;
    }

    //using double array
    cout<<endl<<"Using Double Array => arrDouble(1.1, 2.2, 3.3, 4.4, 5.5"<<endl;
    for (size_t i = 0; i < N; i++)
    {
        cout<< "arrDouble => "<< i<<".th value : "<< arrDouble[i] << " address : "<< &arrDouble[i]<<endl;
    }
    
    //using double
    cout << endl<<"Using Double pointer"<<endl;
    for (size_t i = 0; i < N; i++)
    {
        cout<< "ptrDouble => "<< i<<".th value : "<< *(ptrDouble+i) << " address : "<< (void*) (ptrDouble +i*4)<<endl;
    }


    return 0;
}