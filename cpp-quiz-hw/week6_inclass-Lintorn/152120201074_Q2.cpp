#include <iostream>
using namespace std;
#define N 5
int main(){
    // Define a pointer p that points the array. 
    int arr[N];
    int* p = arr;
    
    //Assign elements of array by integer values taken from user via pointer p.
    for (int i = 0; i < N; i++)
    {
        int n; 
        cin >>n;
        *(p+i) = n;
    }
    //Print the elements of array via pointer p.
    for (int i = 0; i < N; i++)
    {
        cout << i << "th. index : " << *(p+i)<< endl;
    }
    cout << endl;
    //Define an additional pointer r that points the last elements of the array. 
    int* r = &arr[N-1];
    
    //Print the elements of array last to first via pointer r.
    for (int i = 4, j = 0; i >= 0 ; i-- ,j++)
    {
        cout << i << "th. index : " << *(r-j)<<endl;
    }
    
    

    return 0;
}