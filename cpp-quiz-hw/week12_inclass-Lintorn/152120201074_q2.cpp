#include <iostream>
using namespace std;

int main(void){
    int *p;
    int n; cin >>n;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(p + i) = i;
        cout << i<<". element:  "<< *p + i<< endl;
    }
    
    delete[] p;

    return 0;
}