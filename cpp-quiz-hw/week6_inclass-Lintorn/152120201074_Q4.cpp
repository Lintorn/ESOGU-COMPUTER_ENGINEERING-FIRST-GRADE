#include <iostream>
using namespace std;
#define N 5
//Write a function "findCommon" that takes two arrays of integer pointers as input and 
//finds the numberof elements they have in common.
void findCommon(int* arr1, int* arr2){
    for (size_t i = 0; i < N; i++)
    {
     //If two values at the same index are equal, you can say it is common
     if(arr1[i]==arr2[i]){
         cout << i << "th. index of the both elements are equal and it is : "<< arr1[i]<<endl;
     }  
    }
    
}

int main(){
    //Define two integer arrays with size of 5 using initial values you specify
    int arr1[N] = {3,4,5,6,7}, arr2[N] = {1,4,3,2,7};
    findCommon(arr1,arr2);
    
    


    return 0;
}