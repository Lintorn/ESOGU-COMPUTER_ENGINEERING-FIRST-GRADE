#include <iostream>
using namespace std;

void replace(int*ptr)
{
  for (size_t i = 1; i < 4-1; i++)
  {
      for (size_t j = 1; j < 4-1; j++)
      {
          //satir ve sutunu ilk indekslerden baslatarak son indeksi dahil etmeden 0 lari 1 ile degistir
          *(ptr+(i*4)+j) = 1;
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