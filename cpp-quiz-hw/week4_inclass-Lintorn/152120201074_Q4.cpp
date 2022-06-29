#include <iostream>
using namespace std;
// definition
void factorial(int n, int *r);

int main(){
    //variable declaration
    // n is input value and r is result
    int  n; int r =1;
    cin >> n;
    factorial(n,&r);
    cout << r;
    
}
// declaration
void factorial(int n, int *r){
    // multiplying by ascending
    for (int i = 1; i <= n; i++)
    {
        *r = *r * i;
    }

}