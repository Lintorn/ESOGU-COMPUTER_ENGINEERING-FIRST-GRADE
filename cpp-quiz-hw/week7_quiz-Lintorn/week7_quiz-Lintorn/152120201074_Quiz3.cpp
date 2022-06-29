#include <iostream>
using namespace std;



void replace(int*ptr)
{
  
  for (int i = 0; i < 4; i++)
  {
      for (int j = 0; j < 4; j++)
      {
          if (i == j)
          {
              *(ptr+(i*4)+j) = 1;
          }
          //unfortunately this code changes  1,0 and 2,3 index couldn't figure out how to solve it
          if(i+j == 3 )
          {
            *(ptr+(i*4)+j) = 1;
          }

      }
      
  }
  
  
  
    

}

int main()
{
    
    int arr[4][4]={0}; 
    int* ptr = &arr[0][0];
    replace(ptr);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<< arr[i][j];
        }
        cout<< "\n";
    }
    






    return 0;
}