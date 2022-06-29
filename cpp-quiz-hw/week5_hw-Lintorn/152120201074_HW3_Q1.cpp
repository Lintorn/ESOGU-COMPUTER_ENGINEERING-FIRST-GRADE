#include <iostream>
using namespace std;

void print_without_pointer(int A[3][5]){
   
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 5; j++)
        { // print values without pointer
            cout << "Element at x["<<i<<"]["<<j<<"]:"<<A[i][j]<<" Address:"<<&A[i][j]<<endl;
        }
        
    }
    
}

void print_with_pointer(int (*A)[5]){
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 5; j++)
        { // print values with pointer
            cout << "Element at x["<<i<<"]["<<j<<"]:"<<*(*(A+i)+j)<<" Address:"<<&*(*(A+i)+j)<<endl;
        }
        
    }
    
}

void print_with_pointer2(int (*A)[5]){
    
   //print the values using pointer and only one loop 
    for (int* i=&*(*(A+0)+0),j; i <= &*(*(A+2)+4); i++,j++)
    {
        cout << "Elements in x: "<<j<<" Addresses: "<<i<<endl;
    }//&*(*(A+0)+0) is starting point of the arrray and &*(*(A+2)+4) is the end of the array

}
void change_odd(int (*A)[5]){

    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<5;j++)
        {
            if (*(*(A+i)+j)%2==1){// change the value if it is odd
                *(*(A+i)+j) = 0;
            }
        }
        
    }
    

}

void change_even(int (*A)[5]){

    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<5;j++)
        {/*  change the value if it is even and (because we changed the odd values to 0 with the change odd function) greater than 0 */
            if (*(*(A+i)+j)%2==0 &&*(*(A+i)+j)>0){
                *(*(A+i)+j) = 1;
            }
        }
        
    }
    

}

int main(){
    //array a declaration
    int A[3][5]{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    
    cout << "Print without pointer"<<endl;
    print_without_pointer(A);

    cout << "Print with pointer"<<endl;
    print_with_pointer(A);

    cout << "Print With pointer and one For Loop"<<endl;
    print_with_pointer2(A);

    
    change_odd(A);
    cout << "Print after odd values changed to 0"<<endl;
    print_with_pointer(A);

    change_even(A);
    cout << "Print after even values changed to 1"<<endl;
    print_with_pointer(A);

    return 0;
}