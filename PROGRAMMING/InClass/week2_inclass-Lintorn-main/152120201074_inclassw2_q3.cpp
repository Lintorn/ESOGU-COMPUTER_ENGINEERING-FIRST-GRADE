#include <iostream>
using namespace std;

int main(){
    int A[] = {2, 0, 0, 1, 4, 9, 0, 5, 0, 7};


    for (int t=0; t< 10; t++) {
        for (int i= 0; i< 10; i++) {
        if (A[i]==0) { // if zero is found indexes that comes after that zero shift once to left
            for (int j = i; j<9; j++) {
                A[j] = A[j+1];
            }
            A[9] = -1;
        }
    }
    }

    for (int i=0; i< 10; i++) {
        cout << A[i]<<" ";
    }

}
