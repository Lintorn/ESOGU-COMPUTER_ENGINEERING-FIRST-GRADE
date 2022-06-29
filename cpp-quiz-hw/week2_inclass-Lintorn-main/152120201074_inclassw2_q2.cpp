#include <iostream>
using namespace std;

int main() {
    int A[]={1,2,2,8,4,4,6,6,6,8,4,9};

    int maxCount = 0;
    for (int i= 0; i< 12; i++) {
        int count = 0;
        int val = A[i];
        for (int j = 0; j< 12; j++) {
            if (val==A[j]) {
                count++;
            }
        }
        if (count>maxCount) {
            maxCount = count;
        }
    }


   cout << maxCount;

    



}