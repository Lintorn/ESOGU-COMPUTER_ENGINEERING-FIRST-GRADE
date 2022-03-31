#include <iostream>
using namespace std;

int main() {

	//predefined array
    int A[]={1,1,2,3,2,3,4,4,5,4,3,4,2,3,4,3};
    
    int counter;

    for (int i = 0; i < 16; i++)
    {
        if(A[i] > A[i-1] && A[i] > A[i+1]){
            counter++;
        }
    }
    cout << "number of hills "<<counter;

	



}