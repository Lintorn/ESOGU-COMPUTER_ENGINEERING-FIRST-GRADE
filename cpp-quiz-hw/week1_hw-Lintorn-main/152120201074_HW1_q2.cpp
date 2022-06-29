#include <iostream>
using namespace std;

int main() {

	//define the array
	int C[5];
	for (size_t i = 0; i < 5; i++)
	{
		cin >> C[i];
	}
	
    //Print the elements in the array C with the array indexes.
    for (size_t i = 0; i < 5; i++)
	{
		printf("C[%d] = %d\n", i, C[i]);
	}

  
	printf("duplicated elements:  ");
	int dupelements= 0;
	//Find and print duplicate elements in the array C.
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (C[i] == C[j]) {
				printf("%d  ", C[i]);
				dupelements += 1;
                break;
			}
		}
		
	}

    //Print counts of a total number of unique elements in the array C
    printf("\ncounts of a total number of unique elements in the array: %d\n", (5 - dupelements));

    //using bobble sort to sort elements in the array
    for (int i= 0; i < 5; i++) {
     for (int j = 0; j < 5 - i; j++) {
      if (C[j] > C[j + 1]) {
        int temp = C[j];
        C[j] = C[j + 1];
        C[j + 1] = temp;
      }
    }
  }
  
  printf("Max element of the array %d \n", C[4]);
  printf("Min element of the array %d \n",C[0]);
  
}   
