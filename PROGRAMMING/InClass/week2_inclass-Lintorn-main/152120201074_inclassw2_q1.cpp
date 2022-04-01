#include <iostream>
using namespace std;

int main() {
    // define arrays
    int N; int A[9]={1,2,3,4,5,6,7,8,9};int direction;
    int temp;   
    
    //take direction from user
    cout << "Enter the directon 1 for left 2 for right:  ";
    cin >> direction;

    switch(direction){
        case 1:
            cout << "Direction is left "<< endl;
            cout << "please enter shifting time:  ";
            cin >> N;
            
            for (int i = 0; i < N ; i++)
            {
                temp = A[0];

                for (int j = 0; j < 9-1; j++)
                {
                    A[j] = A[j+1];
                }
                A[8] = temp;

            }
            
            for (size_t i = 0; i < 9; i++)
            {
                cout << A[i] << "  "; 
            }
            

            break;

        case 2:
            cout << "Direction is right";
            cout << "please enter shifting time:  ";
            cin >> N;
            
            for (int i = 0; i < N ; i++)
            {
                temp = A[8];

                for (int j=8;0<j; j--)
                {
                    A[j] = A[j-1];
                }
                A[0] = temp;

            }
            
            for (size_t i = 0; i < 9; i++)
            {
                cout << A[i] << "  "; 
            }


            break;
    }
    




}
